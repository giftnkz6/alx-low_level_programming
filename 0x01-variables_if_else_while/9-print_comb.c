#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int g;

	for (g = '0'; g <= '8'; g++)
	{
		putchar(g);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
