#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int yolcuel,yolcunormal,el,normal,ucret;
	
	printf("Enter the hand kg value:");
	scanf("%d",&yolcuel);
	
	printf("Enter the normal kg value:");
	scanf("%d",&yolcunormal);
	
	
	el=(yolcuel-8)*4;
	normal=(yolcunormal-15)*5;
	
	if(el<0)
	{
		el=0;
	}
	
	if(normal<0)
	{
		normal=0;
	}
	
	ucret=el+normal;
	
	printf("Total fee payable:%d",ucret);
	
	return 0;
}
