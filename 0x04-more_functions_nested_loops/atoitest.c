#include<stdio.h>

int myAtoi(char* str)
{
    // Initialize result
    int res = 0;
          // Iterate through all characters
         // of input string and update result
          // take ASCII character of corresponding digit and
          // subtract the code from '0' to get numerical
        // value and multiply res by 10 to shuffle
          // digits left to update running total
     for (int i = 0; str[i] != ' '; ++i)
     {
	     printf("\n res1 - %d\n", res);
	     res = res * 10 + str[i] - '0';
	     char b = '0';
	     printf("str(i) - %d, res2 = %d, zero = %d", str[i], res, b);
     }
     return res;
}
 // Driver Code
int main()
{
	char str[] = "89789";
	int val = myAtoi(str);
	printf("%d\n", val);
	return 0;
}
