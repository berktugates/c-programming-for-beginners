#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int m;
	
	printf("Type the number corresponding to the month you want to select:");
	scanf("%d",&m);
	
	switch(m)
	{
		case 1: printf("January");
				break;
		
		case 2: printf("February");
				break;
				
		case 3: printf("March");
				break;
		
		case 4: printf("April");
				break;	
				
		case 5: printf("May");
				break;
		
		case 6: printf("June");
				break;	
				
		case 7: printf("July");
				break;
		
		case 8: printf("August");
				break;
				
		case 9: printf("September");
				break;
		
		case 10: printf("October");
				break;	
				
		case 11: printf("November");
				break;
		
		case 12: printf("December");
				break;	
				
		default: printf("Please try again.");															
	}
	
	//***********************************************************************************	
	
	int d;
	
	printf("\nType the number corresponding to the day you want to select");
	scanf("%d",&d);
	
	switch(d)
	{
		case 1: printf("Sunday");
				break;
				
		case 2: printf("Monday");
				break;
				
		case 3: printf("Tuesday");
				break;
				
		case 4: printf("Wednesday");
				break;
				
		case 5: printf("Thursday");
				break;
				
		case 6: printf("Friday");
				break;
				
		case 7: printf("Saturday");
				break;
				
		default: printf("Please try again.");			
										
	}
	
	return 0;
}
