#include <stdio.h>

#include <stdlib.h>
j
#include <time.h>

/* *
 * main - entry point
 *
 * Description - assigns random number to n each time n it's executed
 *
 * Return - 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)

	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)

	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)

	{
		printf("%d is negative\n", n);
	}
	return (0);
}
