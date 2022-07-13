#include "main.h"
#include<stdio.h>

/**
 * _strlen - returns string length
 *
 * @s: string
 *
 * Return: returns value
 */

int _strlen(char *s)
{
	int a = 0;
	
	while (s[a])
	{
		a++;
	}
	return (a);
}
