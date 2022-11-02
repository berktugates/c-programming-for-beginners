#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
//Example 1


	int step,agg,i;
	
	printf("To find the sum of all odd numbers before and after, enter the number:");
	scanf("%d",&step); 
	
	for(i=1;i<=step;i++)
	{
		if(i%2==1 || i==1)
		{
			agg=agg+i;
		}
	}
	
	
	printf("Agg:%d",agg);



//Example 2


		int step,i,sqrt,agg=0;
		
		printf("Enter the number you entered and the number to square and sum all the numbers before it:");
		scanf("%d",&step);
		
		
		for(i=1;i<=step;i++)
		{
			sqrt=i*i;
			agg=agg+sqrt;
		}
		
		printf("Agg:%d",agg);
		
	
	
	return 0;
}
