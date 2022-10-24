#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int year,week,day;	
	printf("Enter the number of days:");
	scanf("%d",&day);
	
	year=day/365;
	week=(day%365)/7;
	day=day-((year*365)+(week*7));
	
	printf("Year:%d\n",year);
	printf("Week:%d\n",week);
	printf("Day:%d",day);
	
	return 0;
}
