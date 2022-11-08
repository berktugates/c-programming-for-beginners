#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// Algorithm that prints the sum of the matrices entered from the keyboard

	int m1[2][2]={4,8,2,5},m2[2][2]={3,1,7,2},m3[2][2],i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			m3[i][j]=m1[i][j]+m2[i][j];
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",m3[i][j]);
		}
		printf("\n");
	}
	
// Algorithm that prints the sum of the matrices received from the user

	int a,b,c,d,i,j;
	
	printf("In order for the matrices to be added, the number of rows and columns must be equal!\n\n");
	
	printf("Enter the number of rows of the first matrix:");
	scanf("%d",&a);	
	
	printf("Enter the number of columns of the first matrix:");
	scanf("%d",&b);
	
	printf("Enter the number of rows of the second matrix:");
	scanf("%d",&c);	
	
	printf("Enter the number of columns of the second matrix:");
	scanf("%d",&d);
	
	
	int m1[a][b],m2[c][d],m3[a+b][c+d];
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("Enter the [%d]-[%d] values of the M1 matrix:",i+1,j+1);
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("Enter the [%d]-[%d] values of the M2 matrix:",i+1,j+1);
			scanf("%d",&m2[i][j]);
		}
	}
	
	
	if(a==c && b==d)
	{
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				m3[i][j]=m1[i][j]+m2[i][j];
			}
		}
	}
	else
	{
		printf("\nIn order for the matrices to be added, the number of rows and columns must be equal!");
	}
		
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d",m3[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
