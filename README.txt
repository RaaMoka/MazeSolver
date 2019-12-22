Mocanu Raluca
334 AB

Am implementat un circuit secvential sincron care parcurge un labirint de dimensiune 64×64 cu regula de parcurgere data de algoritmul Wall Follower cu urmarirea peretelui drept.

Am construit un automat cu urmatoarele stari:

`define start	0	//startul in labirint
`define look	1	//ma uit pe cele 4 directii
`define check	2	//verific daca e perete sau culoar pe pozitia pe care ma aflu, in 				caz favorabil marchez valoarea pozitiei cu 2	
`define back	3	//ma intorc in pozitia anterioara in cazul in care dau de perete
`define right 	4	
`define down	5
`define left	6
`define up	7
`define move	8	//efectuez mutarea
`define done	9	//am ajuns la iesire
`define wait	10	//astept un semnal de ceas pentru a putea citi valoarea din maze_in

Alte variabile importante:

parameter width = 4;		//ultima stare e notata cu 10 => 4 biti
reg[5:0] prev_row,prev_col;	//salvez indicii pozitiei verificate anterior
integer i=0,ii=0;		// indici ai directiilor pe care trebuie sa le urmaresc, ii - pentru nr de ordine al diretiei/directia anterioara, i - directia curenta

reg [width-1:0] state, next;	//starea curenta, starea urmatoare

