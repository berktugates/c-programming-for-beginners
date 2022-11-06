#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayac,i,agg=0,n,ao;

	printf("How many numbers do you want to enter:");
	scanf("%d",&sayac);

	for(i=1;i<=sayac;i++)
	{
		printf("Enter the number:");
		scanf("%d",&n);
		agg=agg+n;
	}

	ao=agg/sayac;

	printf("Arithmetic mean:%d",ao);	
	
	
	return 0;
}
