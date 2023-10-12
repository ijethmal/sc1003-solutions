/*Write a C program that accepts a positive number height between 1 and 10 as its
parameter value, and prints a triangular pattern according to height. Note that only 1, 2
and 3 are used to generate the patterns. A sample input and output session when the
program is called is given below. For example, if height is 3, then the program will print
the following pattern:
1
22
333*/
//STATUS: PASSED on APAS

#include <stdio.h>
int main()
{
    int height;
    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("Pattern:\n");
    for (int i=1; i<height+1; i++)
    {
        if (i%3 == 0)
        {
            for (int j=1; j<i+1; j++)
            {
                printf("3");
            }
            printf("\n");
        }
        else
        {
            for (int j=1; j<i+1; j++)
            {
                printf("%d", i%3);
            }
            printf("\n");
        }
    }
    return 0;
}