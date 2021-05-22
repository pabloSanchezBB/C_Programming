//Big Book of C Chapter 1, Program 2: Fahrenheit to Celsius Converter

#include <stdio.h>

/* The goal is to print Fahrenheit-Celsius Table for degrees 0-300,
stepping up by 20 on each iteration */

void calculateTemps();
void calculateTempsFloat();
void calculateTempsFOR();
void calculateTempsFloatFOR();

int main(void){
	
	calculateTemps();
	calculateTempsFOR();
	
	calculateTempsFloat();
	calculateTempsFloatFOR();
	
	return 0;
}

void calculateTemps(){

	int fahr, cels; //for storing temps 
	int i, step; //for incrementing
				 //and storing a value for the loop to check

	i=0; //declare i to be equal to our lower bound

	step = 20; //declare
			   //that our step will be 20
			   
	printf("Basic Table, No Justification\n\n");

	printf("deg F\tdeg C\n"); //for readability
	

	fahr = i; //set fahrenheit temp to the minimum

	while(fahr<=300){ //repeats nested code until fahr>300 
	
		cels = 5*(fahr-32)/9; //calculate temp in celsius

		printf("%d\t%d\n", fahr, cels); //print the values 
		
		fahr += step;

	}
	
	printf("\nTable with Values Justified Right\n\n");
	printf("deg F \tdeg C\n"); //for readability
	
	fahr = i; //set fahrenheit temp to the minimum

	while(fahr<=300){ //repeats nested code until fahr>300 
	
		cels = 5*(fahr-32)/9; //calculate temp in celsius

		printf("%3d\t%6d\n", fahr, cels); //print the values
										//setting with to
										//justify text to the
										//right
		
		fahr += step;

	}



	return;
}

void calculateTempsFloat(){
	float fahr, cels;
	int i, step;
	
	i=0;
	step = 20;
	
	printf("\n\nTable with Floating Point Numbers(aka Decimals)\n\n");
	printf("deg F\t deg C\n");
	
	fahr = i;
	
	while(fahr<=300){
		cels = (5.0/9.0) * (fahr-32);
		
		printf("%3.0f\t%6.1f\n", fahr, cels);
		fahr += step;
	}
	
	return;
}

void calculateTempsFOR()
{
	int fahr;
	
	printf("\n\nTable with Integers using a FOR Loop\n\n");
	printf("deg F\t deg C\n");
	
	for(fahr = 0; fahr <= 300; fahr += 20)
	{
		printf("%3d \t%6d\n", fahr, 5*(fahr-32)/9);
	}
}

void calculateTempsFloatFOR()
{
	float fahr;
	
	printf("\n\nTable with Floats using a FOR Loop\n\n");
	printf("deg F\t\t deg C\n");
	
	for(fahr = 0; fahr <= 300; fahr = fahr + 20)
	{
		printf("%3f\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}

/*
	Notes on this Program:
		- Printing the values:
			- In C, %d denotes an int in a string
			- after the string, type the int's names in
				the order they appear in the string.
			- By adding an integer to the %[int]d,  we can 
				add a width to the integer to augment the view
				when the table is printed.
			
				
		- Calculating Celsius:
			- In C, integer fractional values are truncated!
			- If we did 5/9 * (fahr-32)...
			- 5/9 would be calculated and = 0 due to truncation
				and would therefore make all celsius values 0.
			
			
*/