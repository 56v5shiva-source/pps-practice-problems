#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("entrt n value:");
	scanf("%d",&n);
	i=1;
	while(i<=10)
{
	printf("%d\n",i*n);
	i++;
}
getch ();
return 1;
}