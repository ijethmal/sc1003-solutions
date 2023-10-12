/*Write a C program that reads in several lines of non‐negative integer numbers,
computes the average for each line and prints out the average. The value –1 in each line
of user input is used to indicate the end of input for that line.*/
//STATUS: PASSED on APAS

#include <stdio.h>
#include <math.h>

int main()
{
    printf("Enter number of lines:\n");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter line %d (end with -1): \n", i + 1);
        int num;
        double sum = 0;
        double count = 0;
        while (1)
        {
            scanf("%d", &num);
            if (num == -1)
            {
                break;
            }
            else 
            {
                sum += num;
                count++;
            }
            
        }
        printf("Average = %.2f\n", sum/count);
        /*{
            scanf("%d", &num);
            if (num == -1)
            {
                break;
            }
            else 
            {
                sum += num;
                count++;
                printf("sum = %d, count = %d\n", &sum, &count");
            }
            printf(" ");
        }*/
    }
    return 0;
}