#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("*************************Basic Calculator*************************\n\n\n");
	
	int choice,n1,n2,answer;
		
	printf("1-Addition\n");
	printf("2-Subtraction\n");
	printf("3-Multiplication\n");
	printf("4-Division\n");
	
	printf("\nSelect the action you want to do:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter the first number:");
			scanf("%d",&n1);
			
			printf("Enter the second number:");
			scanf("%d",&n2);
			
			answer=n1+n2;
			
			printf("Result:%d",answer);
			break;
			
		case 2:
			printf("Enter the first number:");
			scanf("%d",&n1);
			
			printf("Enter the second number:");
			scanf("%d",&n2);
			
			answer=n1-n2;
			
			printf("Result:%d",answer);
			break;
			
		case 3:
			printf("Enter the first number:");
			scanf("%d",&n1);
			
			printf("Enter the second number:");
			scanf("%d",&n2);
			
			answer=n1*n2;
			
			printf("Result:%d",answer);
			break;
			
		case 1:
			printf("Enter the first number:");
			scanf("%d",&n1);
			
			printf("Enter the second number:");
			scanf("%d",&n2);
			
			answer=n1/n2;
			
			printf("Result:%d",answer);
			break;			
			
	}
	
	return 0;
}
