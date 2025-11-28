#include<stdio.h>

int main()
{
float basic,gross,net;
printf("enter basic salary:");
scanf("%f",&basic);
gross=basic+(basic*20/100);
net=gross-(gross*10/100);
printf("gross%f net: f",gross,net);	
}