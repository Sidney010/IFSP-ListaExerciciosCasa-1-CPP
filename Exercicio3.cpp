#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/****************************************************************
* Autor: 				Sidney Campos Aragão					*
* Data:		31/03/2026											*
* Versão:	1.0													*
* Objetivo:		Criar um programa para calcular azulejos    	*
*			    necessários para azulejar uma parede      	    *
*                                                       		*
****************************************************************/

int main(void){
	
	int AP, LP, AA, LA;
	int AreaP, AreaA;
	float QtdA;
	
	// Dados para calcular a area da parede
	printf("Digite a altura de parede: ");
	scanf("%i", &AP);
	printf("Digite a largura de parede: ");
	scanf("%i", &LP);
	
	// Dados para calcular a area da parede
	printf("Digite a altura de azulejo: ");
	scanf("%i", &AA);
	printf("Digite a largura de azulejo: ");
	scanf("%i", &LA);
	
	// Calculando areas e quantidade de azulejo
	AreaP = AP * LP;
	AreaA = AA * LA;
	QtdA  = AreaP / AreaA;
	
	// %.1f -> Limita a uma casas decimais
	printf("Sao necessarios um total de %.1f azulejos", QtdA); 
	
	
}
