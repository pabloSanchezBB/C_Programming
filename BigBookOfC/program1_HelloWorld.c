//Big Book of C Chapter 1, Program 1: Hello World!

#include <stdio.h> //include information from standard I/O Library

int main(void){ //define a function 'main', with return type 'int' and
				//parameter 'void'(or nothing)

	printf("Hello World!"); //main calls library function printf to
							//print these characters

	printf("\n"); //main calls stdio.h function to print \n, or a
				  //newline

	return 0; 
}

/*
Notes on this program:

	- A C Program always consists of FUNCTIONS and VARIABLES. - A
	function contains statements that specify the computing operations
	to be done - Variables store the values used in the computation of
	functions.

	- For all C Programs, 'main' is special in stating a method. -
	Programs begin executing at the beginning of main, so every program
	must contain a main method.

	- The line '#include <stdio.h> tells the compiler to include
	information about the standard input/output library, Chapter 7
	covers the standard library.


*/