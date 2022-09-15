#include "main.h"
/**
* print_line - print the character "_" n times to draw a line
* @n: number of characters to draw
*/
void print_line(int n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
