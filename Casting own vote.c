#include<stdio.h>
int main()
{
    int age;
    printf("Enter your Age:");
    scanf("%d",&age);
    if(age>=18)
        printf("Congratulations!!! You are eligible for his/her vote");
    else if(age<18 && age>=1)
        printf("You are not eligible for his/her vote");
    else
        printf("Not correct your age!!!!!,please try again");
    getch();
}
