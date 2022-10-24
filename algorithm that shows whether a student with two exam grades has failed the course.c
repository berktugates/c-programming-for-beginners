#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float e1,e2,avg;
	
	printf("Enter your first exam grade:");
	scanf("%f",&e1);
	
	printf("Enter your second exam grade:");
	scanf("%f",&e2);
	
	avg=(e1+e2)/2;
	
	printf("Average of the student:%.2f",avg);
	
	return 0;
}
