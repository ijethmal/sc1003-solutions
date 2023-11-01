/*Write a function palindrome() that reads a character string and determines
whether or not it is a palindrome. A palindrome is a sequence of characters that reads the
same forwards and backwards. For example, "abba" and "abcba" are palindromes, but
"abcd" is not. The function returns 1 if it is palindrome, or 0 if otherwise. The function
prototype is given as follows:*/
//STATUS: PASSED on APAS

#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1000
int palindrome(char *str);
int main()
{
   char str[80], *p;
   int result = INIT_VALUE;
   
   printf("Enter a string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0'; 
   result = palindrome(str);
   if (result == 1)
      printf("palindrome(): A palindrome\n");
   else if (result == 0)
      printf("palindrome(): Not a palindrome\n");    
   else 
      printf("An error\n");      
   return 0;
}
int palindrome(char *str)
{
	int j = strlen(str) - 1;
	int i = 0;
	int returnInt = 1;
	while (j>i)
	{
	    if (str[i++] != str[j--])
	    {
	        returnInt = 0;
	    }
	    else
	    {
	        continue;
	    }
	}
	return returnInt;
}