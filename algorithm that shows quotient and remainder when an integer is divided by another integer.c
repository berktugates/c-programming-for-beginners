#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int divider,divisor,part,remainder;
	printf("Enter the number to divider:");
	scanf("%d",&divider);
	
	printf("Enter the number to divisor:");
	scanf("%d",&divisor);
	
	part=divider/divisor;
	remainder=divider%divisor;
	
	printf("Divider:%d\n",divider);
	printf("Divisor:%d\n",divisor);
	printf("Part:%d\n",part);
	printf("Remainder:%d",remainder);
	
	return 0;
}
