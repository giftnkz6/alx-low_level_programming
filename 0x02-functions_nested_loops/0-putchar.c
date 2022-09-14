#include "main.h"
#include<stdio.h>

/**
 * main - Print word "_putchar"
 * Return: Always 0 (Success)
 */


int main(void)
{
	int a;
	char c[] = "_putchar";

	for (a = 0; a < 8; a++)
	{
		_putchar(c[a]);
	}
	_putchar('\n');
	return (0);

}
