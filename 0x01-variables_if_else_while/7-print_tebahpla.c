#include<stdio.h>

/**
 * main- This programm prints out the alphabet.
 *
 * Return -It always prints out 0 (success)
 */
int main(void)
{
	char ch;
	for(ch='z' ; ch >= 'a'; ch --)
	{
		putchar(ch);
	}
	putchar("\n");
	return(0);
	
}	
