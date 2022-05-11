#include<stdio.h>
#include<conio.h>
void main(){
	int a[5];
	int i,sum=0;
	printf("enter the elements of array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];

		}
	printf("%d",sum);	
	
	return 0;
}
