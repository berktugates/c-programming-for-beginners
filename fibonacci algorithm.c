#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int a=1,b=1,c,i,step;
	
	printf("How many steps of the Fibonacci sequence you want to print:");
	scanf("%d",&step);
	
	printf(" %d  %d ",a,b);
	
	for(i=1;i<=step;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf(" %d ",c);
	}
	
	return 0;
}
