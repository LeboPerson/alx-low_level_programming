#include<stdio.h>

/**
 * main- This programm prints out the alphabet.
 *
 * Return -It always prints out 0 (success)
 */
int main(void)
{
        int x;
        for(x = 48 ; x < 58 ; x++)
        {       
                putchar(x);
        }
	for(x = 48 ; x < 103 ; x++)
        {
                putchar(x);
        }

        putchar("\n");
        return(0);
        
}
