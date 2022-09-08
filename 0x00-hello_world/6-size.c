#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 

int main(void)

{
	char charType;
	int intType;
	long int longintType;
        long long int llintType;
	float floatType;
	printf("Size of a char: %lu bytes(s)\n", sizeof(charType));
	printf("Size of an int: %lu bytes(s)\n", sizeof(intType));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(longintType));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(llintType));
	printf("Size of a float: %lu bytes(s)\n", sizeof(floatType));
	return (0);
}
6-size.c (END) 
