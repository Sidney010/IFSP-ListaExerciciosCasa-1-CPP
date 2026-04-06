/****************************************************************
* Autor: 				Sidney Campos Aragão					*
* Data:		05/04/2026											*
* Versão:	1.0													*
* Objetivo:		Criar um programa para calcular a área	    	*
*			    de superficie e o volume de uma esfera          *
*               a partir do valor do raio	            		*
*																*
****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
	
	// Declaração de Variaveis: Decimais
	float V, A, R;
	
	// Entrada de dados: Valor do raio da esfera
	printf("Digite o valor do raio: ");
	scanf("%f", &R);
	
	// Calculo da esfera
	V = 4 / 3 * pow(R, 3);
	A = 4 * pow(R, 2);
	
	// %.2f -> Limita a duas casas decimais
	// Exibir resultado: volume e area de superfície da esfera
	printf("O volume da esfera corresponde a: %.2f, e o area de superfície: %.2f", V, A); 
	
	
}
