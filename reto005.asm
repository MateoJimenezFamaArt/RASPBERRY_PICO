@16384 //Primer bus pix
D=A // Asigno El valor en D
@16 // Me paro en 16
M=D // Asigno el valor 16384 en 16
(LOOP) //Loop Pos = 4
@24576 // Parate en KB
D=M // Asigna el valor de KB en D
@67
D=D-A
@PAINT // Parate en 19
D;JEQ //Salta a 19 si D!=0
@ERRASE
0;JMP
(ERRASE_SCREEN)
@16 //Parate en 16
D=M //toma el valor en 16 (16384)
@16384 //Parate en 16384
D=D-A //D = D - 16384
@LOOP //Parate en Label LOOP (4)
D;JLE // Salta a 4 si D es <= que 0 esto quiere decir que No hay press
@16 //Parate en 16
AM=M-1 
M=0
@LOOP
0;JMP
(PAINT)
@16 // Parate en 16
D=M // D = Lo que haya en 16 (16384)
@24576 //A sera igual a 24576
D=D-A // D - A para ver cuantos faltan por pintar
@LOOP // Parate en label LOOP (4)
D;JGE // Si la resta de D-A es mayor o igual que 0 salta a 4 si no sigue
@16 //Parate en 16
A=M // Toma el valor de 16 (16384)
M=-1 // Asigna el valor -1 en la nueva A
@16 // Parate en 16
M=M+1 //Lo que este en la memoria de 16 se le suma uno
@PAINT //Parate en label PAINT (19)
0;JMP // Salta hasta 19
(ERRASE)
@24576
D=M
@68
D=D-A
@ERRASE_SCREEN
D;JEQ
@LOOP
0;JMP
