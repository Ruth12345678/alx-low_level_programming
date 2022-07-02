/*C program to print size of data types */
#include<stdio.h>
#include<string.h>
int main(){
	printf("Size of a char: %i byte(s)\nSize of an int: %i byte(s)\nSize of a long int: %i byte(s)\nSize of a long long int: %i byte(s)\nSize of a float: %i byte(s)\n",sizeof(char),sizeof(int),sizeof(long int),sizeof(long long int),sizeof(float));
	return(0);
}	
