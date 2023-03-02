basicCalc.o: basicCalc.c basicCalc.h
	gcc -c basicCalc.c

cl_interface.o: cl_interface.c cl_interface.h basicCalc.h equations.h matrix.h
	gcc -c cl_interface.c

equations.o: equations.c equations.h
	gcc -c equations.c

matrix.o: matrix.c matrix.h
	gcc -c matrix.c

main.o: main.c basicCalc.h cl_interface.h equations.h matrix.h
	gcc -c main.c

main: main.o basicCalc.o cl_interface.o equations.o matrix.o
	gcc main.o basicCalc.o cl_interface.o equations.o matrix.o -o main -lm