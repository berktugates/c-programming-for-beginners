#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int n1,n2,i,agg=0;

	printf("Enter the first number you want to multiply:");
	scanf("%d",&n1); 
	
	printf("Enter the second number you want to multiply:");
	scanf("%d",&n2); 

	
	for(i=1;i<=n2;i++)
	{
		agg+=n1;
	}
	
	printf("Answer:%d",agg);
	
	
	
	return 0;
}
