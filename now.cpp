#include <stdio.h>
#include <conio.h>

int main(void){

  int num, limit;
  printf("Enter the table you want to print : ");
  scanf("%d", &num);
  
  printf("Enter the number of roes you want to print: ");
  scanf("%d", &limit);
  
  printf(" multiplication table is :\n");
  for(int i=1; i<=limit; i++){
  	printf("%d X %d = %d\n", num, i, num*i);
  }

  getch();
  
  return 0;
  
}