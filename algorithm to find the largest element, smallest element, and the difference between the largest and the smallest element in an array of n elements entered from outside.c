#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int step,i,eb,ek,min;

	printf("Enter the number of elements of your array:");
	scanf("%d",&step);
	
	int array[step];

	for(i=0;i<step;i++)
	{
		printf("enter the %d. element of the array",i+1);
		scanf("%d",&array[i]);
	}

	eb=array[1];
	ek=array[1];

	for(i=0;i<step;i++)
	{
		if(array[i]<ek)
		{
			ek=array[i];
		}
		else if(array[i>eb])
		{
			eb=array[i];
		}
	}

	min=eb-ek;
	
	printf("The largest element of the array:%d\n",eb);
	printf("The smallest element of the array:%d\n\n",ek);
	printf("Difference of largest and smallest number:%d",min);
	
	return 0;
}
