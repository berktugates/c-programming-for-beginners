#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,hundreds,tens,ones;
	
	printf("Uc basamakli bir sayi giriniz:");
	scanf("%d",&n);
	
	hundreds= n/100;
	tens= (n/10)%10;
	ones=(n%10);
	
	printf("Hundreds digit of the number:%d\n",hundreds);
	printf("The tens digit of the number:%d\n",tens);
	printf("The ones digit of the number:%d",ones);
	
	
	return 0;
}
