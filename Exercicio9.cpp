/****************************************************************
* Autor: 				Sidney Campos Aragão					*
* Data:		05/04/2026											*
* Versão:	1.0													*
* Objetivo:		Criar um programa para calcular a média	    	*
*			    aritmética de quatro notas bimestrais	        *
*				com determinado críterios						*
*																*
****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
	
	// Declaração de Variaveis: Decimais
	float P1, P2, Ativ, M;
	
	// Entrada de dados: Valor das notas da provas e atividades
	printf("Digite o valor da nota da prova 1: ");
	scanf("%f", &P1);
	printf("Digite o valor da nota da prova 2: ");
	scanf("%f", &P2);
	printf("Digite o valor da nota da atividade: ");
	scanf("%f", &Ativ);

	// Calculo da media com os determinados critérios
	M = (P1 * 4 + P2 * 4 + Ativ * 2)/10;
	
	// %.2f -> Limita a duas casas decimais
	// Exibir resultado: Média
	printf("A media corresponde a: %.2f", M); 
	
	
}
