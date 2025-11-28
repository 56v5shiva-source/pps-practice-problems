// initialize 2-D array
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][5];
	int i,j,max;
	for(i=0;i<3;i++)
	{
	for(j=0;j<5;j++)
	{
	printf("enter the %d row %d col element:",i+1,j+1);
	scanf("%d",&a[i][j]);
}
printf("\n");
}
printf("element of matrix \n");
for(i=0;i<3;i++)
{
	max=a[j][0];
	for(j=0;j<5;j++)
{
	printf("%5d",a[i][j]);
	if(a[i][j]>max)
	max=a[i][j];
}
printf("\t max=%d\n",max);
}
getch ();
return 0;
}