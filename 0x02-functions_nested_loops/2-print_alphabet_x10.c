#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char c;

	while (a < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		a++;
		_putchar('\n');
	}
}
