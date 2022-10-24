#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1,n2,add,subt,multip,div;	
	printf("Enter the first number:");
	scanf("%f",&n1);
	
	printf("Enter the second number:");
	scanf("%f",&n2);
	
	add=n1+n2;
	subt=n1-n2;
	multip=n1*n2;
	div=n1/n2;

	printf("The result of the addition operation:%.2f\n",add);
	printf("The result of the subtraction:%.2f\n",subt);
	printf("The result of the multiplication operation:%.2f\n",multip);
	printf("The result of the division operation:%.2f",div);
	
	return 0;
}
