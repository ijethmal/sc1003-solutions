#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
    char name[20];
    int telno;
} PhoneBk;

void printPB(PhoneBk *pb, int size);
int readin(PhoneBk *pb);
void search(PhoneBk *pb, int size, char *target);

int main()
{
    PhoneBk s[MAX];
    char t[20], *p;
    int size=0, choice;
    char dummychar;
    printf("Select one of the following options: \n");
    printf("1: readin()\n");
    printf("2: search()\n");
    printf("3: printPB()\n");
    printf("4: exit()\n");
    do {
    printf("Enter your choice: \n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            scanf("%c", &dummychar);
            size = readin(s);
            break;
        case 2:
            scanf("%c", &dummychar);
            printf("Enter search name: \n");
            fgets(t, 20, stdin);
            if (p=strchr(t,'\n')) *p = '\0';
            search(s,size,t);
            break;
        case 3:
            printPB(s, size);
            break;
    }
    } while (choice < 4);
    return 0;
}

void printPB(PhoneBk *pb, int size)
{
    if (size == 0)
    {
        printf("Empty phonebook\n");
    }
    else
    {
        int i;
        for (i = 0; i < size; i++)
        {
            printf("Name: %s \nTelno: %d\n", pb[i].name, pb[i].telno);
        }
    }
}

int readin(PhoneBk *pb)
{
    char temp[20];
    int count = 0;
    int i=0;
    while (1)
    {
    printf("Enter name:\n");
    //scanf("%s", temp);
    fgets(temp, 20, stdin);
    char *p;
    if (p=strchr(temp,'\n')) *p = '\0';
    if (strcmp(temp, "#") == 0)
    {
        break;
    }
    else
    {
        char tempNo[20];
        strcpy(pb[i].name, temp);
        printf("Enter tel:\n");
        //scanf("%d", &pb[i].telno); 
        fgets(tempNo, 20, stdin);
        pb[i].telno = atoi(tempNo);
        printf("%d\n", pb[i].telno);
        count+=1;
    }
    }
    return count;
}

void search(PhoneBk *pb, int size, char *target)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (strcmp(pb[i].name, target) == 0)
        {
            printf("Name = %s, Tel = %d\n", pb[i].name, pb[i].telno);
            break;
        }
    }
}