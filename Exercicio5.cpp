#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/****************************************************************
* Autor: 				Sidney Campos Aragão					*
* Data:		31/03/2026											*
* Versão:	1.0													*
* Objetivo:		Criar um programa para calcular o IMC	    	*
*			    a partir dos lados da altura e massa     	    *
*               da pessoa em Kg                            		*
*
****************************************************************/

int main(void){
	
	float IMC, h, m;
	
	printf("Digite sua altura em m: ");
	scanf("%f", &h);
	printf("Digite sua massa em kg: ");
	scanf("%f", &m);

	IMC = m / pow(h , 2);

	printf("Seu IMC corresponde a: %.2f", IMC); 
	
	
}
