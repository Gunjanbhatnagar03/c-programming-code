/* C Program to Calculate Square of a Number using Function */
 
#include<stdio.h>

int Calculate_Square(int Number);
 
int main()
{
  int number, Square;
 
  printf(" \n Please Enter any integer Value : ");
  scanf("%d", &number);
  
  Square = Calculate_Square(number);
  
  printf("\n Square of a given number %d  =  %d", number, Square); 
 
  return 0;
}

int Calculate_Square(int Number)
{
	return Number * Number;
}
