#include<stdio.h>
#include<conio.h>
int main()
{
	int a=30,b=18;
	printf("swap two numders:");
	scanf("%d%d",&a,&b);
	printf("before swaping: a=%d,b=%d, a,b:");
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping: a=%d,b=%d, a,b:");
	getch()	;
	return 0;
}