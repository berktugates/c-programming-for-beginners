#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,j;
		
// 4x4 square with stars
		
			for(i=1;i<=4;i++)
			{
				printf("****\n");
			}

// right triangle with stars
	
			for(i=1;i<6;i++)
			{
				for(j=1;j<=i;j++)
				{
					printf("*");
				}
				printf("\n");
			}
	
// inverted right triangle with stars
	
			for(i=1;i<6;i++)
			{
				for(j=5;j>=i;j--)
				{
					printf("*");
				}
				printf("\n");
			}
	
	
// 2x5 rectangle with stars

			for(i=1;i<=5;i++)
			{
				for(j=1;j<=2;j++)
				{
					printf("*");
				}
				printf("\n");
			}




	
	
	return 0;
}
