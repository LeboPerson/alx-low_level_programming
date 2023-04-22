#include <stdio.h>

/**
 * main - This programm prints out the alphabet.
 *
 * Return : It's always 0 (success)
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int n;
	for (n = 0; n < 26; n++)
	{
		putchar(alph[n]);
	}
	putchar("\n");

	return (0);
}
