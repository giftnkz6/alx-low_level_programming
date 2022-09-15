#include "main.h"

/**
 * print_line - prints a straight line
 * @n: parameter
 *
 */
void print_line(int n)
{

	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
