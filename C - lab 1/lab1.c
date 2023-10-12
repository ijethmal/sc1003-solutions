/*Write a C program that prints the ID and grade of each student in a class. The input
contains the student IDs and their marks. The range of the marks is from 0 to 100. The
relationships of the marks and grades are given below:
Grade Mark
A 100‐75
B 74‐65
C 64‐55
D 54‐45
F 44‐0
Use the sentinel value –1 for student ID to indicate the end of user input.
Write the program using the switch statement.*/
//STATUS: PASSED on APAS
#include <stdio.h>

int main()
{
    int id = 0;
    while (id != -1)
    {
        printf("Enter Student ID:\n");
        scanf("%d", &id);
        int mark = 0;
        printf("Enter Mark:\n");
        scanf("%d", &mark);
        switch (mark)
        {
            case 0 ... 44:
                printf("Grade: F\n");
                break;
            case 45 ... 54:
                printf("Grade: D\n");
                break;
            case 55 ... 64:
                printf("Grade: C\n");
                break;
            case 65 ... 74:
                printf("Grade: B\n");
                break;
            case 75 ... 100:
                printf("Grade: A\n");
                break;
            default:
                printf("Invalid Mark\n");
                break;
        }
    }
return 0;
}