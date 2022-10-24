#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;	
	printf("Enter a number:");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("The number you entered is an even number");
	}
	else
	{
		printf("The number you entered is an odd number");
	}
	
	return 0;
}
