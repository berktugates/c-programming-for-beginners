#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,hundreds,tens,digit,agg;
	
	printf("Enter a three digit number:");
	scanf("%d",&n);
	
	
	hundreds= n/100;
	tens= (n/10)%10;
	digit=n%10;
	
	agg= hundreds+tens+digit;
	
	printf("The sum of the digits of the number you entered:%d",agg);
	
	return 0;
}
