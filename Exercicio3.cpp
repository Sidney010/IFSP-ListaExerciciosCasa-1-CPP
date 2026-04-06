/****************************************************************
* Autor: 				Sidney Campos Aragão					*
* Data:		31/03/2026											*
* Versão:	1.0													*
* Objetivo:		Criar um programa para calcular azulejos    	*
*			    necessários para azulejar uma parede      	    *
*                                                       		*
****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
	
	// Declaração de Variaveis: Inteiras
	int AP, LP, AA, LA;
	int AreaP, AreaA;
	
	// Declaração de Variaveis: Decimais
	float QtdA;
	
	// Dados para calcular a area da parede
	// Entrada de dados: Altura e Largura da parede
	printf("Digite a altura de parede: ");
	scanf("%i", &AP);
	printf("Digite a largura de parede: ");
	scanf("%i", &LP);
	
	// Dados para calcular a area do azulejo
	// Entrada de dados: Altura e Largura do azulejo
	printf("Digite a altura de azulejo: ");
	scanf("%i", &AA);
	printf("Digite a largura de azulejo: ");
	scanf("%i", &LA);
	
	// Calculando areas da parede e azulejo e quantidade de azulejos 
	//                      necessários
	AreaP = AP * LP;
	AreaA = AA * LA;
	QtdA  = AreaP / AreaA;
	
	// %.1f -> Limita a uma casas decimais
	// Exibir resultado: quantidade de azulejos
	printf("Sao necessarios um total de %.1f azulejos", QtdA); 
	
	
}
