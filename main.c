#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* Author: Rodrigo Carlos */

float gRandom(float max){
	srand(time(NULL));
	return rand()%(int)max;
}

void delay(unsigned int mseconds){
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int gDelay(int max){
	srand(time(NULL));
	return rand()%max;
}

int main(int argc, char *argv[]) {
	
	// Simular download da Web
	
	setlocale(LC_ALL, "Portuguese");
	
	int count_time=0;
	
	float velocidade_atual;
	float velocidade_media=0;
	float tamanho_total;
	float tamanho_restante;
	
	int delay_time = 0;
	
	tamanho_total = 500;
	tamanho_restante = 500;
	
	// Download de 500 kb - Teste
	
	while(tamanho_restante>0){
		
		velocidade_atual = gRandom(100);
		
		velocidade_media = (velocidade_atual+velocidade_media);
		
		printf("Velocidade atual: %f.\n", velocidade_atual);
		
		delay_time = 1000;
		
		tamanho_restante = tamanho_restante-velocidade_atual;
		
		count_time++;
	
		delay(delay_time);
	}
	
	velocidade_media = velocidade_media/count_time;
	
	printf("Download terminado!\n");
	
	printf("Velocidade média: %f\n", velocidade_media);
	
	return 0;
	
}
