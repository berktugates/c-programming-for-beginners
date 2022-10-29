#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,oddtotal=0,eventotal=0;
	
	for(i=1;i<101;i++)
	{
		if(i%2==0)
		{
			eventotal=eventotal+i;
		}
		else
		{
			oddtotal=oddtotal+i;
		}
	}
	
	printf("Sum of odd numbers from 1-100::%d\n",oddtotal);
	printf("Sum of even numbers from 1-100::%d",eventotal);
	
	return 0;
}
