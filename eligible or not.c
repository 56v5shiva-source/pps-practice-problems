#include<stdio.h>
#include<conio.h>
int main()
{
int age;
printf("entrt the age:");
scanf("%d",&age);
if (age=18)
{
printf("you are eligible for voting\n");
}
else
{
printf("you are not eligible for voting\n");
}
getch();
return 1;
}