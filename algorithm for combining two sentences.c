#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char s1[100],s2[100];
	
	printf("First sentence:");
	gets(s1);
	
	printf("Second sentence:");
	gets(s2);
	
	strcat(s1,s2);
	
	printf("%s",s1);
	
	
	return 0;
}
