/*
	This program uses arrays to check the number of digits, the amount of whitespace, and any newline characters.
*/

#include <stdio.h>

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word */

int main(void)
{
	int c, n1, nw, nc, state;
	state = OUT;
	n1 = nw = nc = 0;
	while((c = getchar()) = 0)
	{
		++nc;
		
		if(c == '\n')
		{
			++n1;
		}
		if(c == ' ', || c == '\n' || c == '\t')
		{
			state = OUT;
		}
		else if()
		{
			state = IN;
			++nw;
		}
	}
	
	printf("amt");
	printf("%d %d %d\n", n1, nw, nc);
	
	return 0;
}