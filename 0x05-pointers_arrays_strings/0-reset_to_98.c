#include <stdio.h>
#include "main.h"
/**
* reset_to_98 - Takes a pointer to an int as parameter, updates the value
* it points to
* @n: Pointer argument passed to function.
* Return: 0
*/
#include <stdio.h>



void reset_to_98(int *);



/**
 *
 *  * main - check the code for Holberton School students.
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)
{
	int n;

	n = 402;
	printf("%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);
	return (0);
}
