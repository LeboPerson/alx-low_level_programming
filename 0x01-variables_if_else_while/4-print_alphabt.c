#include<stdio.h>

/**
 * main- This programm prints out the alphabet.
 *
 * Return -It always prints out 0 (success)
 */

int main(void)
	int n;
	for (n=97; n <123 ; n++)
	{
		if (n !=101 && n ! 113)
		{
			ptuchar(n);
		}
	}
	putchar("\n");
	return (0);
}

