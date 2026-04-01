#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/****************************************************************
* Autor: 				Sidney Campos Aragão					*
* Data:		31/03/2026											*
* Versão:	1.0													*
* Objetivo:		Criar um programa para calcular a area      	*
*			    e o perimetro a partir dos lados de um     	    *
*               retangulo                                  		*
*
****************************************************************/

int main(void){
	
	int a, b, A, P;
	
	printf("Digite a altura do retangulo: ");
	scanf("%i", &a);
	printf("Digite a largura do retangulo: ");
	scanf("%i", &b);

	A = a * b;
	P = a * 2 + b * 2;

	printf("A area corresponde a: %i, e o perimetro a: %i", A, P); 
	
	
}
