/****************************************************************
* Autor: 				Sidney Campos Aragão					*
* Data:		05/04/2026											*
* Versão:	1.0													*
* Objetivo:		Criar um programa para calcular a média	    	*
*			    aritmética de quatro notas bimestrais	        *
*																*
****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
	
	// Declaração de Variaveis: Decimais
	float N1, N2, N3, N4, Mf;
	
	// Entrada de dados: Valor das notas Bimestrais
	printf("Digite o valor da nota do 1 bimestre: ");
	scanf("%f", &N1);
	printf("Digite o valor da nota do 2 bimestre: ");
	scanf("%f", &N2);
	printf("Digite o valor da nota do 3 bimestre: ");
	scanf("%f", &N3);
	printf("Digite o valor da nota do 4 bimestre: ");
	scanf("%f", &N4);
	
	// Calculo da media final
	Mf = (N1+N2+N3+N4)/4;
	
	// %.2f -> Limita a duas casas decimais
	// Exibir resultado: Média Final
	printf("A media final corresponde a: %.2f", Mf); 
	
	
}
