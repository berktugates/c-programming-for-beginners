#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,n,agg=0;
	printf("How many elements should your array have:");
	scanf("%d",&n);
	int numbers[n];
	for(i=0;i<n;i++)
	{
		printf("Add element to your array:");
		scanf("%d",&numbers[i]);
		agg=agg+numbers[i];	
	}
		printf("Agg:%d",agg);
		
	return 0;
}
