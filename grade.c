#include<stdio.h>
#include<conio.h>
int main()
{
int m1,m2,m3,total;
float avg;
printf("enter marks in 3subjects");
scanf("%d%d%d",&m1,&m2,&m3);
total=m1+m2+m3;
avg=total/3.0;
printf("total marks=%d\n",total);
printf("avg marks=%f\n",avg);
if (avg=60)
{
printf("first division");
}
else if(avg=50)
{
printf("second division");
}
else if(avg=40)
{
printf("third division");
}
else
{
printf("faied");
}
getch();
return 1;

}
