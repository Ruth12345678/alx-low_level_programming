/* C puts functio. Function main prints out a specified string*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char stra[250];

	strcpy(stra, "\"Programming is like building a multilingual puzzle");
	puts(stra);
	return (0);
}
