#include <stdio.h>
 
int main()
{
  	int num, last_num;
 
  	printf("\n Enter any Number : ");
  	scanf("%d", & num);
  	
  	last_num = num % 10;
  
  	printf(" \n The Last Digit of a Given Number %d =  %d", num, last_num);
 
  return 0;
}