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

int main(int argc, char *argv[]) {
	
	int *vet, tam;
	
	readSize(&tam);
	
	vet = (int *)malloc(tam*sizeof(int));
	
	if(vet==NULL)
		exit(1);
		
	readVector(vet, tam);
		
	ordenarLista(vet, tam);
	
	show(vet, tam);
	
	return 0;
}
