#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int l,e1,e2,avg;
	
	printf("1-Math\n");
	printf("2-Science\n");
	printf("3-Social Science\n");
	printf("4-English\n");
	
	printf("\nSelect the course for which you want to calculate the average:");
	scanf("%d",&l);
	
	switch(l)
	{
		case 1:
		printf("Enter your first math grade:");
		scanf("%d",&e1);
		printf("Enter your second math grade:");
		scanf("%d",&e2);
		
		avg= (e1+e2)/2;		
		printf("Your math class GPA:%d",avg);		
		break;
		
		case 2:
		printf("Enter your first science grade:");
		scanf("%d",&e1);
		printf("Enter your second science grade:");
		scanf("%d",&e2);
		
		avg= (e1+e2)/2;		
		printf("Your science class GPA:%d",avg);		
		break;
		
		case 3:
		printf("Enter your social science grade:");
		scanf("%d",&e1);
		printf("Enter your second social science grade:");
		scanf("%d",&e2);
		
		avg= (e1+e2)/2;		
		printf("Your social science class GPA:%d",avg);		
		break;
		
		case 4:
		printf("Enter your first english grade:");
		scanf("%d",&e1);
		printf("Enter your second english grade:");
		scanf("%d",&e2);
		
		avg= (e1+e2)/2;		
		printf("Your english class GPA:%d",avg);		
		break;	
		
		default: printf("Please try again.");
				break;
	}
	
	return 0;
}
