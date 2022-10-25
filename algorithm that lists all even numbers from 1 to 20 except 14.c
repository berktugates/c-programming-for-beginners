#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i=1;
	
	while(i<=20)
	{
		if(i%2==0 && i!=14)
		{
			printf("%d\n",i);
		}
		i++;
	}
	
	return 0;
}
