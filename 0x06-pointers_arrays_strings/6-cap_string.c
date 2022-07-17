#include "main.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>

/**
 * cap_string - capitalizes all words in
 * a string.
 *
 * @stra: input string.
 *
 * Return: returns a value.
 */

char *cap_string(char *stra)
{
	int a;

	for (a = 0; stra[a]; a++)
	{
		 if (stra[(a - 1)] == ' ' || stra[(a - 1)] == ';' || stra[(a - 1)] ==  '.' || stra[(a - 1)] ==  '!' || stra[(a - 1)] == '?' || stra[(a - 1)] == '(' || stra[(a - 1)] == ')' || stra[(a - 1)] == '{' || stra[(a - 1)] == '}' || stra[(a - 1)] == '\n' || stra[(a - 1)] == '\t' || stra[(a - 1)] == ',')
		{
			stra[a] = toupper(stra[a]);
		}
		else
		{
			stra[a] = stra[a];
		}
	
	}
	return (stra);
	}
