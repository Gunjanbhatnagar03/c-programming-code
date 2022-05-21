#include <stdio.h>  
#include <conio.h>  
void main()  
{  
   
   int num, i, sum = 0; // initialize and declare the local variables  
    printf("Enter a positive number: ");  
    scanf("%d", &num);  
    i = 0;  
    do  
    {  
        sum = sum + i; // store the sum of natural number  
        i++;   
		  
    } 
	while (i <= num); 
      
    // print the sum of natural number  
    printf(" \n Sum of first %d natural number is : %d", num, sum);  
    
    getch();  
} 
