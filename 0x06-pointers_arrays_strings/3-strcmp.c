#include<stdio.h>
#include "main.h"
#include<string.h>
#include<stdlib.h>

/**
 * _strcmp: compares two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: returns a value
 */

int _strcmp(char *s1, char *s2)
{
	int neg;

	neg = s1[0] - s2[0];
	return (neg);
}
