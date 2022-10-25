#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int fact=1,n;
	
	printf("Enter the number whose factorial you want to get:");
	scanf("%d",&n);
	
	while(n>1)
	{
		fact=fact*n;
		n--;
	}

	printf("%d",fact);
	
	return 0;
}
