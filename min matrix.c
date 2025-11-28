// initialize 2-D array
#include<stdio.h>
#include<conio.h>
int main ()
{
	int a[3][5];
	int i,j,min;
	for(i=0;i<3;i++)
	{
	for(j=0;j<5;j++)
	{
	printf("enter the %d row %col element:",i+1,j+1);
	scanf("%d",& a[i][j]);
}
printf("\n");
}
min=a[0][0];
printf("element of matrix\n");
for(i=0;i<3;i++)
{
	for(j=0;j<5;j++)
	{
	printf("%5d",a[i][j]);
	if(a[i][j]<min)
	min=a[i][j];
}
printf("\n");
}
printf("min element of matrix=%d\n",min);
getch ();
return 0;
}