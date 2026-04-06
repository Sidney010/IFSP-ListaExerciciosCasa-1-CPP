/****************************************************************
* Autor: 				Sidney Campos Aragão					*
* Data:		05/04/2026											*
* Versão:	1.0													*
* Objetivo:		Criar um programa para trocar o conteudo     	*
*			    de duas variaveis a e b, utilizando-se	        *
*				de um terceira variavel c						*
*																*
****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
	
	// Declaração de Variaveis: Inteiras
	int a, b, c;
	
	// Entrada de dados: Valor de a e b
	printf("Digite o valor de a: ");
	scanf("%i", &a);
	printf("Digite o valor de b: ");
	scanf("%i", &b);

	// Trocando valores de a e b
	c = a;
	a = b;
	b = c;
	
	// Exibir resultado: Valor de a e b trocados
	printf("O valor de a corresponde a: %i, e o valor de b: %i", a, b); 
	
	
}
