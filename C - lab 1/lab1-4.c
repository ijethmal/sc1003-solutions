/*Write a C program that computes the value of ex according to the following formula:*/
//STATUS: PASSED on APAS
#include <stdio.h>

int main()
{
    float x;
    printf("Enter x: \n");
    scanf("%f", &x);
    //printf("x is %f", x);
    float result = 1;
    for (int i=1; i<=10; i++)
    {
        //get x ^ i
        float power = x;
        if (i > 1)
        {
            for (int j=1; j<i; j++)
            {
                power *= x;
            }
        }
        //printf("x^%d is %f\n", i, power);
        //get factorial of i
        int factorial = 1;
        if (i > 1)
        {
            for (int k=i; k>0; k--)
            {
                factorial *= k;
            }
        }
        //printf("%d! is %d\n", i, factorial);
        //add to result
        result += power/factorial;
        //printf("%f\n", result);
    }
    printf("Result = %.2f", result);
    return 0;
}