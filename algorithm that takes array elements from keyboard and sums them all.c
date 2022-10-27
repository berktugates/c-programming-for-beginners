#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int array[5],agg;
	
	printf("Enter the first number of the array:");
	scanf("%d",&array[0]);
	
	printf("Enter the second number of the array:");
	scanf("%d",&array[1]);
	
	printf("Enter the third number of the array:");
	scanf("%d",&array[2]);
	
	printf("Enter the fourth number of the array:");
	scanf("%d",&array[3]);
	
	printf("Enter the fifth number of the array:");
	scanf("%d",&array[4]);
	
	agg= array[0]+array[1]+array[2]+array[3]+array[4];
	
	printf("\nArray:%d-%d-%d-%d-%d\n",array[0],array[1],array[2],array[3],array[4]);
	printf("The sum of the elements in the array:%d",agg);
	
	
	return 0;
}
