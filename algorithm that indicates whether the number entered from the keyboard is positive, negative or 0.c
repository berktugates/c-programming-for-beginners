#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int n;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	if(n==0)
	{
		printf("This number is 0");
	}
	else if(n>0)
	{
		printf("The number you entered is %d. This number is positive.",n);
	}
	else
	{
		printf("The number you entered is %d. This number is negative.",n);
	}

	
	
	return 0;
}
