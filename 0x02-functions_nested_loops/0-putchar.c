#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */


int main(void)

{
	int a;
	char c[10] = "_putchar";

	for (a = 0; a < 9; a++)
	{
		putchar(c[a]);
	}
	putchar('\n');
	putchar(10);
	return (0);

}
