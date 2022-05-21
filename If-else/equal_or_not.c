
//Write a C Program to input two numbers and checkboth numbers are equal or not equalusing simple if statement 

#include<stdio.h>
#include<conio.h>
int main()
{
   int num1, num2;
   printf("Enter First Number=");
   scanf("%d", &num1);
   printf("Enter 2nd Number=");
   scanf("%d", &num2);
   if(num1 == num2)
     printf("First Number %d is equal to Second Number %d ", num1,num2);
   if(num1 != num2)
     printf("First Number %d is not equal to Second Number %d ", num1,num2);
   
   return 0;
}
