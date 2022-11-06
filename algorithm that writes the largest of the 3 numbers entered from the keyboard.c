#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1,n2,n3;
	
	printf("Enter the first number you want to sort by:");
	scanf("%d",&n1);
		
	printf("Enter the second number you want to sort by:");
	scanf("%d",&n2);
	
	printf("Enter the third number you want to sort by:");
	scanf("%d",&n3);
	
	if(n1>n3 && n1>n2 && n3>n2)
	{
		printf("Largest number: %d.\n",n1);
		printf("Arrangement: %d>%d>%d",n1,n3,n2);
	}
	else if(n1>n3 && n1>n2 && n2>n3)
	{
		printf("Largest number: %d. \n",n1);
		printf("Arrangement: %d>%d>%d",n1,n2,n3);
	}
	else if(n2>n1 && n2>n3 && n1>n3)
	{
		printf("Largest number: %d. \n",n2);
		printf("Arrangement: %d>%d>%d",n2,n1,n3);
	}
	else if(n2>n1 && n2>n3 && n3>n1)
	{
		printf("Largest number: %d. \n",n2);
		printf("Arrangement: %d>%d>%d",n2,n3,n1);
	}
	else if(n3>n1 && n3>n2 && n1>n2)
	{
		printf("Largest number: %d. \n",n3);
		printf("Arrangement: %d>%d>%d",n3,n1,n2);
	}
	else 
	{
		printf("Largest number: %d. \n",n3);
		printf("Arrangement: %d>%d>%d",n3,n2,n1);
	}
	
	
	
	return 0;
}
