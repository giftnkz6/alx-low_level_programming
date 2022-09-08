#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 

int main(void)

{
	char charM;
	int intN;
	long int longL;
        long long int longLL;
	float floatN;
	printf("Size of a char: %d bytes(s)\n", sizeof(charM));
	printf("Size of an int: %d bytes(s)\n", sizeof(intN));
	printf("Size of a long int: %d bytes(s)\n", sizeof(longL));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(longLL));
	printf("Size of a float: %d bytes(s)\n", sizeof(floatN));
	return (0);
}
6-size.c (END) 
