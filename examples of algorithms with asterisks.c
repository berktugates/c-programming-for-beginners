#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//algorithm that draws a rectangle according to the aspect value entered from the keyboard
	
	int height,width,i,j;
	
	printf("Enter the height of your rectangle:");
	scanf("%d",&height);
	
	printf("Enter the width of your rectangle:");
	scanf("%d",&width);
	
	for(i=1;i<=height;i++)
	{
		for(j=1;j<=width;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
//algorithm that draws a right triangle according to the base value entered from the keyboard

	int base,i,j;
	
	printf("Enter the base value of your right triangle:");
	scanf("%d",&base); 

	for(i=1;i<=base;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}	
		

//algorithm that draws an inverted right triangle based on the base value entered from the keyboard

	int base,i,j;
	
	printf("Enter the base value of your right triangle:");
	scanf("%d",&base);
	
	for(i=1;i<=base;i++)
	{
		for(j=base;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}

	
	return 0;
}
