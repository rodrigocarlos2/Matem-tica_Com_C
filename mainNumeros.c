#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Author:  Rodrigo Carlos */

void read(int *tam1, int *tam2){
	
	printf("Digite o tamanho da lista 1: ");
	scanf("%d", &*tam1);
	
	printf("Digite o tamanho da lista 2: ");
	scanf("%d", &*tam2);
	
}

void readLists(float *ls1, float *ls2, int tam){
	
	int i;
	
	for(i=0; i<tam; i++){
		
		fflush(stdin);
		
		printf("Digite o valor da lista 1: ");
		scanf("%f", &ls1[i]);
		
		fflush(stdin);
		
		printf("Digite o valor da lista 2: ");
		scanf("%f", &ls2[i]);
		
	}
	
}

int inv_div(float *ls1, float *ls2, int tam){
	
	int i;
	
	int return_f = 0;
	
	float result;
	float ls_result[tam];
	
	for(i=0; i<tam; i++){
		result = ls1[i]/ls2[i];
		ls_result[i] = result;
	}
	
	for(i=0; i<tam-1; i++){
		if(ls_result[i]!=ls_result[i+1]){
			return_f = -1;
			break;
		}
	}
	
	if(return_f!=-1){
		return 1;
	}
	
	return_f = 0;
	
	for(i=0; i<tam; i++){
		result = ls1[i]*ls2[i];
		printf("Result: %.2f.\n", result);
		ls_result[i] = result;
	}
	
	for(i=0; i<tam-1; i++){
		if(ls_result[i]!=ls_result[i+1]){
			return_f = -1;
			break;
		}
	}
	
	if(return_f!=-1){
		return 2;
	}
	
	return -1;
	
}

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float *list1, *list2;
	
	int tam1, tam2;
	int result;
	
	read(&tam1, &tam2);
	
	if(tam1==tam2){
		
		list1 = (int *)malloc(tam1*sizeof(int));
		list2 = (int *)malloc(tam2*sizeof(int));
		
		readLists(list1, list2, tam1);
		
		result = inv_div(list1, list2, tam1);
		
		if(result==-1){
			printf("Não é direto ou indiretamente proporcional.\n");
		}
		else if(result==1){
			printf("Números diretamente proporcionais.\n");
		}
		else{
			printf("Números inversamente proporcionais.\n");
		}
		
	}
	else{
		printf("Listas com tamanhos diferentes!\n");
	}
	
	getchar();
	
	return 0;
}
