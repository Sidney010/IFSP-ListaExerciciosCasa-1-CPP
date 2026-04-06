/****************************************************************
* Autor: 				Sidney Campos Aragão					*
* Data:		31/03/2026											*
* Versão:	1.0													*
* Objetivo:		Criar um programa para calcular o IMC	    	*
*			    a partir dos lados da altura e massa     	    *
*               da pessoa em Kg                            		*
*																*
****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
	
	// Declaração de Variaveis: Decimais
	float IMC, h, m;
	
	// Entrada de dados: Valor da altura em metros e massa em kg
	printf("Digite sua altura em m: ");
	scanf("%f", &h);
	printf("Digite sua massa em kg: ");
	scanf("%f", &m);
	
	// Calculo de IMC utilizando a massa e altura
	IMC = m / pow(h , 2);
	
	// %.2f -> Limita a duas casas decimais
	// Exibir resultado: IMC
	printf("Seu IMC corresponde a: %.2f", IMC); 
	
	
}
