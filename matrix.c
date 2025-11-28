#include<stdio.h>
int main ()
{
	int a[3][5];
	int i,j;
	for(i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
	{
	printf("enter the %d row %d column element:",i+1,j+1);
	scanf("%d",&a[i][j]);
}
printf("\n");
}
printf("elements of matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<5;j++)
{
printf("%5d",a[i][j]);
}
printf("\n");
}
	return 0;
}