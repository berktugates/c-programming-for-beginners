#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int n,i,agg=0;
	
	printf("Enter the number whose exact divisors you want to find:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
			agg++;
		}
	}
	printf("\nThe total divisors of the number are:%d",agg);

	if(agg==2)
	{
		printf("\n\nThe number you entered is prime.");
	}
	
	
	return 0;
}
