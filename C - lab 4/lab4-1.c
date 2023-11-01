/*Write two versions of a C function that remove all the blank spaces in a string.
The first version sweepSpace1() will use array notation for processing the string, while the
other version sweepSpace2() will use pointer notation. The function prototypes are given
below:*/
//STATUS: 

#include <stdio.h>
#include <string.h>
char *sweepSpace1(char *str);
char *sweepSpace2(char *str);
int main()
{
    char str[80],str2[80], *p;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    strcpy(str2,str);
    printf("sweepSpace1(): %s\n", sweepSpace1(str));
    printf("sweepSpace2(): %s\n", sweepSpace2(str2));
    return 0;
}

char *sweepSpace1(char *str)
{
    static char tempStr[80];
    for (int i=0; i<strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            continue;
        }
        else
        {
            strncat(tempStr, &str[i], 1);
        }
    
    }
    strncat(tempStr, "\0", 1); 
    return tempStr;
}

char *sweepSpace2(char *str) //pointer notation
{
    char *src, *dst;
    for (src = dst = str; *src != '\0'; src++) {
        *dst = *src;
        if (*dst != ' ') dst++;
    }
    *dst = '\0';

    strncat(str, "\0", 1);
    return str;
}