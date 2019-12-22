`timescale 1ns / 1ps

module maze(
input 		clk,
input[5:0] 	starting_col, starting_row, 		// indicii punctului de start
input 		maze_in, 							// ofera informatii despre punctul de coordonate [row, col]
output reg[5:0] row, col, 							// selectează un rand si o coloana din labirint
output reg	maze_oe,							// output enable (activeaza citirea din labirint la randul si coloana date) 	
output reg	maze_we, 							// write enable (activeaza scrierea in labirint la randul si coloana  date) 
output reg	done=0);		 						// iesirea din labirint a fost gasită; semnalul ramane activ 

//TODO implementare

parameter width = 4;			//am 11 stari => 4 biti
reg[5:0] prev_row,prev_col;		//salvez indicii pozitiei verificate anterior
integer i=0,ii=0;				// indici ai directiilor pe care trebuie sa le urmaresc, ii - pentru nr de ordine al diretiei, i - directia curenta

reg [width-1:0] state, next;	//starea curenta, starea urmatoare


`define start	0	//startul in labirint
`define look	1	//ma uit pe cele 4 directii
`define check	2	//verific daca e perete sau culoar pe pozitia pe care ma aflu, in caz favorabil marchez valoarea pozitiei cu 2	
`define back	3	//ma intorc in pozitia anterioara in cazul in care dau de perete
`define right 	4	
`define down	5
`define left	6
`define up		7
`define move	8	//efectuez mutarea
`define done	9	//am ajuns la iesire
`define wait	10	//astept un semnal de ceas pentru a putea citi valoarea din maze_in

always @(posedge clk)begin

	if(!done) begin
		state<=next;

   end

end


always @(*) begin

next=`start;		//pornesc din start; initializari
maze_oe=0;
maze_we=0;


case(state)
	`start:begin			//voi pune 2 in pozitia de start, pozitia curenta va avea coordonatele date pentru punctul de start
		
		maze_we=1;
		row=starting_row;
		col=starting_col;
		next=`look;			
		
	end
	
	`look:begin			//ma uit pe cele 4 directii 
	
		case(i)				//i-ul reprezinta starea curenta a directiei
		
			0:begin
				next=`up;
				i=i+1;
			end
			1:begin
				next=`left;
				i=i+1;
			end
								//incrementarea lui i imi asigura ordinea de verificare impusa astfel incat sa urmaresc peretele drept
			2:begin
				next=`down;
				i=i+1;
			end
				
			3:begin
				next=`right;	
				i=i+1;
			end
							
		
		endcase
		
	end
	
	`right:begin		// ii imi pastreaza numarul de ordine corespunzator directiei
		ii=3;
		prev_row=row;	//salvez indicii curenti
		prev_col=col;
		maze_oe=1;		//out_enable ca apoi sa pot verifica valoarea de pe pozitia ce urmeaza
		
		col=col+1;		// incrementare/decrementare corespunzatoare directiei in tablou
		next=`wait;
	end
	
	`down:begin
		ii=2;
		prev_row=row;		
		prev_col=col;
		maze_oe=1;
		
		row=row+1;
		next=`wait;
	end
	
	`left:begin
		ii=1;
		prev_row=row;		
		prev_col=col;
		maze_oe=1;
		
		col=col-1;
		next=`wait;
	end
	
	`up:begin
		ii=0;
		prev_row=row;
		prev_col=col;
		maze_oe=1;
		
		row=row-1;
		next=`wait;
	end
	
	`wait:begin				//stare in care astept sa primesc valoarea din maze_in
		next=`check;
		if(i>3)				//i trebuie redresat 
			i=0;
	end
	
	`check:begin			//verific valoarea de pe pozitia pe care ma aflu
		
		
		if(maze_in==1)		//ma intorc daca dau in perete
			next=`back;
		else begin
			next=`move;		//altfel ma mut pe pozitia respectiva, si pun valoarea 2 in ea 
			maze_we=1;
		end
			
	end
	
	`back:begin
		row=prev_row;		//indicii primesc valorile pozitiei anterioare
		col=prev_col;
		
		if(i>3)
			i=0;
		
		next=`look; 		//dupa ce ma intorc ma uit mai departe pe celelalte directii
	end
	
	`move:begin			
		i=0;				//dupa fiecare mutare trebuie sa ma uit din nou
		
		if(prev_row==row-1 && prev_col==col)begin		//vin de sus ma uit la stanga
			next=`left;									//conditie necesara pentru a urmari peretele drept
			i=ii;
			end
		if(prev_col==col+1 && prev_row==row)begin		//vin din dreapta ma uit in sus
			next=`up;
			i=ii;
			end
		if(prev_col==col-1 && prev_row==row)begin		//vin din stanga ma uit in jos
			next=`down;
			i=ii;
			end
		if(prev_row==row+1 && prev_col==col)begin		//vin de jos ma uit la dreapta
			next=`right;
			i=ii;										//i primeste indicele directiei anterioare
			end
		if(row==0 || row==63 || col==0 || col==63)		//conditia de incheiere
			next=`done;
			
	end
	
	
	`done: begin
				
		done=1;
		next=`start;

	end


endcase
end



endmodule