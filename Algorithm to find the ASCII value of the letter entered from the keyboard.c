#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	
	printf("Klavyeden bir harf giriniz:");
	scanf("%c",&c);
	
	printf("Klavyeden girdiginiz %c harfinin ASCII degeri:%d",c,c);
	
	
	return 0;
}
