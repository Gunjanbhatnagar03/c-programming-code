#include<stdio.h>
#include<conio.h>
int main(){
	int days;
	 printf(" Press 1 for Monday\nPress 2 for Tuesday\nPress 3 for Wednesday\nPress 4  for Thursday\nPress 5 for Friday\nPress 6 for Saturday\nPress 7 for Sunday ");
	scanf("%d",&days);
	switch(days){
	  	 case 1:
		    printf("Monday");
	  	 break;
	  	 case 2:
		    printf("Tuesday");
	  	 break;
	  	 case 3: printf("Wednesday");
	  	 break;
	  	 case 4: printf("Thursday");
	  	 break;
	  	 case 5: printf("Friday");
	  	 break;
	  	 case 6: printf("Satday");
	  	 break;
	  	 case 7: printf("Sunday");
	  	 break;
	  	 
	  	 default : printf("back to program");
	  	 break;
	  	 

	  }
	
	
}
