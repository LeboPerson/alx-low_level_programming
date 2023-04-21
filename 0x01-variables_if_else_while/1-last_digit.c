# include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	 int a;
        a = n % 10;

        if (a > 5)
        {
                printf("The last digit of %d is %d and it is greater than 5\n", n, a);
        }
        else if (a == 0)
        {
                printf("The last digit of %d is %d and it is equal to 0\n", n, a);
        }
        else
        {
                printf("The last digit of %d is %d and it is less than 6\ and not equal to 0 n", n, a);

                return (0);
	}
	
}
