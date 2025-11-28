#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("enter n value:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
{
	printf("%d\t",i);
	i++;
}
getch();
return 1;
}