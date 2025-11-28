#include<stdio.h>
#include<conio.h>
void bubblesort(int a[],int n);
int main()
{
	int a[100];
	int i,n;
	printf("enter the array size:");
	scanf("%d",n);
	// accecpt n element
	for(i=0;i<n;i++)
	{
	printf("enter the %d element:",i+1);
	scanf("%d",&a[i]);
}
bubblesort(a,n);
//after sorting
printf("after sorting\n");
for(i=0;i<n;i++)
{
printf("%5d",a[i]);
}
return 1;
}
void bubblesort(int a[],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if (a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}