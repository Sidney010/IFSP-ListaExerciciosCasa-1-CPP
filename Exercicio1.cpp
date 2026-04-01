#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/****************************************************************
* Autor: 				Sidney Campos Aragão					*
* Data:		31/03/2026											*
* Versão:	1.0													*
* Objetivo:			Criar um programa para fazer a conversão	*
*				    cambial entre Reais e Dolares a uma taxa	*
*                   de US$1,00 = R$2,40							*
*																*
****************************************************************/

int main(void){
	
	float reais, dolares;
	
	printf("Digite o valor em Reais: ");
	scanf("%f", &reais);
	dolares = reais * 2.4; 
	
	// %.2f -> Limita a duas casas decimais
	printf("O valor em Dolares: %.2f", dolares);
	
}
