#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Author: Rodrigo Carlos

void ordenarLista(int vet[], int tam){
	
	int i;
	
	for(i=0; i<tam; i++){
		
		int j;
		
		for(j=0; j<tam; j++){
			
			if((j+1)<tam){
				
				if(vet[j]>vet[j+1]){
					int temp = vet[j];
					vet[j] = vet[j+1];
					vet[j+1] = temp;
				}
				
			}
			
		}
		
	}
	
}

void readSize(int *tam){
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &*tam);
	
}

void show(int vet[], int tam){
	
	int i;
	
	for(i=0; i<tam; i++){
		printf("Ele. %d: %d\n", i+1, vet[i]);
	}
	
}

void readVector(int *v, int tam){
	
	int i;
	
	for(i=0; i<tam; i++){
		printf("Digite o %d elemento: ", i+1);
		scanf("%d", &v[i]);
	}
	
}

void mediana(int vet[], int tam){
	
	if(tam%2==0){
		
		int pos1 = tam/2;
		int pos2 = pos1-1;
		
		float result = ((float)vet[pos1]+(float)vet[pos2])/(float)2;
		
		printf("Mediana: %.2f\n", result);
		
	}
	else{
		
		int pos = tam/2;
		
		printf("Mediana: %d\n", vet[pos]);
		
	}
	
}

int main(int argc, char *argv[]) {
	
	int *vet, tam;
	
	readSize(&tam);
	
	vet = (int *)malloc(tam*sizeof(int));
	
	if(vet==NULL)
		exit(1);
		
	readVector(vet, tam);
		
	ordenarLista(vet, tam);
	
	show(vet, tam);
	
	mediana(vet, tam);
	
	return 0;
}
