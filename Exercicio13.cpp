/****************************************************************
* Autor: 				Sidney Campos Aragão					*
* Data:		07/04/2026											*
* Versão:	1.0													*
* Objetivo:		Criar um programa para calcular o 				*
*				movimento uniformemente variado,				*
*				atraves do tempo em segundos e					*
*				valor do espaço em metros						*
*																*
****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
	
	// Declaração de Variaveis: Decimais
	float S, t, s0, v0, a;
	
	
	// Entrada de dados: Espaço percorrido e Tempo gasto
	printf("Digite o valor do tempo: ");
	scanf("%f", &t);
	
	s0 = 2.0;
	v0 = 3.0;
	a = 1.0;
	
	// Calculando movimento uniformemente variado
	S = s0 + v0*t + 0.5 * a * pow(t, 2);
	
	// %.2f -> Limita a duas casas decimais
	// Exibir resultado: Espaço percorrido
	printf("O espaco percorrido corresponde a: %.2f ", S); 
	
	
}
