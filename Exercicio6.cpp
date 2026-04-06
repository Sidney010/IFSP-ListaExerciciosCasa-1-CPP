/****************************************************************
* Autor: 				Sidney Campos Aragão					*
* Data:		05/04/2026											*
* Versão:	1.0													*
* Objetivo:		Criar um programa para calcular a área	    	*
*			    de um círculo a partir do valor do raio,   	    *
*               e também calcular o comprimento            		*
*																*
****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
	
	// Declaração de Variaveis: Inteiros
	int A, C, r;
	
	// Entrada de dados: Valor do raio do círculo
	printf("Digite o valor do raio: ");
	scanf("%i", &r);
	
	// Calculo do circulo
	A = pow(r, 2);
	C = 2 * r;
	
	// Exibir resultado: area e comprimento do circulo
	printf("A área do circulo corresponde a: %i, e o comprimento: %i", A, C); 
	
	
}
