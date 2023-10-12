/*Write the function digitPos1() that returns the position of the first appearance of a
specified digit in a positive number. The position of the digit is counted from the right
and starts from 1. If the required digit is not in the number, the function should return 0.
For example, digitPos1(12315, 1) returns 2 and digitPos1(12, 3) returns 0. The function
prototype is given below:
int digitPos1(int num, int digit);
Write another function digitPos2() that passes the result through the pointer parameter,
result. For example, if num = 12315 and digit = 1, then *result = 2 and if num=12 and
digit = 3, then *result = 0. The function prototype is given below:
void digitPos2(int num, int digit, int *result);*/
//STATUS: PASSED on APAS

#include <stdio.h>
#include <stdio.h>
int digitPos1(int num, int digit);
void digitPos2(int num, int digit, int *result);
int main()
{
int number, digit, result=0;
printf("Enter the number: \n");
scanf("%d", &number);
printf("Enter the digit: \n");
scanf("%d", &digit);
printf("digitPos1(): %d\n", digitPos1(number, digit));
digitPos2(number, digit, &result);
printf("digitPos2(): %d\n", result);
return 0;
}
int digitPos1(int num, int digit)
{
    if (num < 10)
    {
        if (num == digit)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int count = 0;
    int newNum = num;
    while (newNum >= 10)
    {
        if (newNum % 10 == digit)
        {
            return count+1;
        }
        else
        {
            newNum /= 10;
            count++;
            continue;
        }
    if (newNum < 10)
    {
        if (newNum == digit)
        {
            return count+1;
        }
        else
        {
            return 0;
        }
    }
    }
    return 0;
}
void digitPos2(int num, int digit, int *result)
{
    *result = digitPos1(num, digit);
}