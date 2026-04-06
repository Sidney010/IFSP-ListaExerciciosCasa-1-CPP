/****************************************************************
* Autor: 				Sidney Campos Aragão					*
* Data:		31/03/2026											*
* Versão:	1.0													*
* Objetivo:		Criar um programa para calcular a area      	*
*			    e o perimetro a partir dos lados de um     	    *
*               retangulo                                  		*
*																*
****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
	
	// Declaração de Variaveis: Inteiras
	int a, b, A, P;
	
	// Entrada de dados: Altura e Largura do retangulo
	printf("Digite a altura do retangulo: ");
	scanf("%i", &a);
	printf("Digite a largura do retangulo: ");
	scanf("%i", &b);
	
	// Calculo de área e perimetro do retangulo
	A = a * b;
	P = a * 2 + b * 2;
	
	// Exibir resultado: area e perimetro
	printf("A area corresponde a: %i, e o perimetro a: %i", A, P); 
	
	
}
