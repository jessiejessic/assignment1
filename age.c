#include<stdio.h>
int main()
{
    int age;
    printf("please enter you age:");
    scanf("%d",&age);
    if(age>70)
        printf("Yes you are eligible ");
    else
        printf("sorry!! you're not yet eligible .");
    return 0;
}
