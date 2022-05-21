#include<stdio.h>  
#include<math.h>
int main(){  
int a,b,c,D;
float root1, root2;
printf("enter the coefficient of a, b,c");
scanf("%d%d%d",&a,&b,&c);


D=b*b-4*a*c;
 if(D>0)
 {
 
 root1 = -b-sqrt (D)/2*a;
  root1 = -b+sqrt (D)/2*a;
  
 printf("\nroots are real and distinct=%f%f", root1, root2);
	}  
	else if(D==0)
	{
		
 root1 = -b-sqrt (D)/2*a;
  root1 = -b+sqrt (D)/2*a;
		printf("\nroots are real and equal=%f%f",root1,root2);
		
	 } 
	 else (D<0);
	 {
	 	printf("\nroots are imaginary");
	 }
return 0;  
} 
