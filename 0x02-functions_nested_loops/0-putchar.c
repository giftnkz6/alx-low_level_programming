#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */


int main(void)

{
	int a;
	char c[] = "_putchar";

	for (a = 0; a < 8; a++)
	{
		putchar(c[a]);
	}
	putchar('\n');
	return (0);

}
