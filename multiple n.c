#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
printf("enter n value:");
scanf("%d",&n);
i=1;
while(i<=10)
{
printf("%d*%d*=%d\n",n,i,n*i);
i++;
}
getch();
return 1;

}
