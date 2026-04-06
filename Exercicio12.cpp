/****************************************************************
* Autor: 				Sidney Campos Aragão					*
* Data:		06/04/2026											*
* Versão:	1.0													*
* Objetivo:		Criar um programa para calcular a 				*
*				velocidadede media, a partir do					*
*				espaço percorrido e do tempo					*
*																*
****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
	
	// Declaração de Variaveis: Decimais
	float S, T, Vm;
	
	// Entrada de dados: Espaço percorrido e Tempo gasto
	printf("Digite o espaco percorrido: ");
	scanf("%f", &S);
	printf("Digite o tempo gasto: ");
	scanf("%f", &T);

	// Calculando a velocidade média
	Vm = S/T;
	
	// %.2f -> Limita a duas casas decimais
	// Exibir resultado: Valor de a e b trocados
	printf("A velocidade media corresponde a: %.2f ", Vm); 
	
	
}
