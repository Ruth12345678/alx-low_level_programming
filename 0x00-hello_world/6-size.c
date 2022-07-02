#include<stdio.h>
#include<string.h>

/**
 * main - prints out a formatted string
 *
 * Return: returns zero
 */

int main(void)
{
	printf("Size of a char: %i byte(s)\nSize of an int: %i byte(s)\n", sizeof(char), sizeof(int));
	printf("Size of a long int: %i byte(s)\nSize of a long long int: %i byte(s)\n", sizeof(long int), sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));

	return (0);
}	
