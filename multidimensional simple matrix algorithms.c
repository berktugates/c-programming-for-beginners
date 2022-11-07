#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	
// Printing a simple two-dimensional matrix

	int i,j,twod[2][3]={1,2,3,4,5,6};


	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",twod[i][j]);
		}
		printf("\n");
	}
	

//**********************************************************************************************************


// Printing the matrix of the user's choice to the screen


	int rows,columns,i,j;

	printf("Enter the number of rows in your matrix:");
	scanf("%d",&rows);
	
	printf("Enter the number of columns in your matrix:");
	scanf("%d",&columns);
	
	printf("\n");
		
	int multi[rows][columns];
	
	for(i=0;i<columns;i++)
	{
		for(j=0;j<rows;j++)
		{
			printf("Enter the value [%d]-[%d]:",i,j);
			scanf("%d",&multi[i][j]);
		}
	}
	
	printf("\n\nThe matrix you entered:\n");
	
	for(i=0;i<columns;i++)
	{
		for(j=0;j<rows;j++)
		{
			printf("%d ",multi[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
