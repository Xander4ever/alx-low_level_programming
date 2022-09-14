#include "main.h"
/**
 *  * main - check the code.
 *  Description : print _alphabet_x10
 *  * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int alpha;

	int i = 0;

	while (i <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		i++;
	}
}
