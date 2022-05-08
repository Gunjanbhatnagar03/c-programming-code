#include<stdio.h>
#include<conio.h>
int main(){
	int a[9]={34,23,56,78,96,10,7,43,20};
	int i;
	//original order
	for(i=0; i<9; i++)
	{
		printf("%d",a[i]);
				
		
	}
	printf("\n");
	
	//reverse order
	for(i=8;i>=0;i--)
{
	printf("%d\n",a[i]);
	}	
return 0;	
	
	
	
}
