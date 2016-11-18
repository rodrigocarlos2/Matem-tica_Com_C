#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void lerAno(int *ano){
	
	printf("Digite o ano: ");
	scanf("%d", &*ano);
	
}

void verBissexto(int ano){
	
	if(ano%4==0 && ano%400!=0 && ano%100!=0){
		printf("Ano bissexto!\n");
	}
	else{
		printf("Ano n�o bissexto!\n");
	}
	
}

int main(int argc, char *argv[]) {
	
	int ano;
	
	lerAno(ano);
	
	verBissexto(ano);
	
	return 0;
}
