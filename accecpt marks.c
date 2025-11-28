#include<stdio.h>
int main()
{
int m1,m2,m3,total;
float avg;
printf("enter marks in 3 subjets");
scanf("%d%d%d",&m1,&m2,&m3);
total=m1+m2+m3;
avg=total,1/3.0;
printf("total marks =%d\n",total);
printf("avg marks=%f\n",avg);
if(avg=60)
{
printf("congrats's");
}
return 1;
}

