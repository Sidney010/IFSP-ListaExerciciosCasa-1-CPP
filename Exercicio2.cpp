/****************************************************************
* Autor: 				Sidney Campos Aragão					*
* Data:		31/03/2026											*
* Versão:	1.0													*
* Objetivo:			Criar um programa para fazer a conversão	*
*				    cambial entre Dolares e Reais a uma taxa	*
*                   de US$1,00 = R$2,40							*
*																*
****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
	
	// Declaração de Variaveis: Decimais
	float reais, dolares;
	
	// Entrada de dados: Valor em dolares
	printf("Digite o valor em Dolares: ");
	scanf("%f", &dolares);
	
	// Calculo de conversão de dolares para reais
	reais = dolares / 2.4; 
	
	// %.2f -> Limita a duas casas decimais
	// Exibir resultado: Valor em dolares
	printf("O valor em Reais: %.2f", reais);
	
}
