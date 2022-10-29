#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int vize,final,but,ort;
	
	printf("Vize notunuzu giriniz:");
	scanf("%d",&vize);
	
	printf("Final notunuzu giriniz:");
	scanf("%d",&final);
	
	ort= (vize*4/10)+(final*6/10);
	
	if(ort>=60)
	{
		printf("Tebrikler %d ortalamayla dersi gectiniz.",ort);
	}
	else
	{
		printf("Maalesef ortalamaniz %d. Bute girmeniz gerekmekte.\n",ort);
		printf("But notunuzu giriniz:");
		scanf("%d",&but);
		ort=(vize*4/10)+(but*6/10);
		if(ort>=60)
		{
			printf("Tebrikler %d ortalamayla dersi gectiniz.",ort);	
		}
		else
		{
			printf("Maalesef %d ortalamayla dersten kaldiniz.",ort);	
		}	
	}
	
	
	
	
	return 0;
}
