/*	Introdução em Desenvolvimento de Software
	Professor: Leandro
	Programador:
	Ruan	
	Matheus	
	Data: 19/03/2018
Versão: 5.11
*/

#include<stdio.h>																//Biblioteca Obrigatoria para a criação do algoritmo
#include<locale.h>																//Biblioteca para permitir idiomais que contém caracteres especiais
#include<math.h>																//Biblioteca para incluir funções matemáticas


main(){																			// Entrada do Algoritmo
	
	setlocale(LC_ALL,"Portuguese");												// Permitindo os caracteres especiais do Portugues-Brasil
	
	float l_m, l_cc, l_mc,total,l,op_conv;										// Declarando a variavel
	
	printf("Insira o números de Litros que deseja converter: ");
	scanf("%f", &l);
	
	printf("Escolha a conversão que deseja fazer: \n");
	printf("1. Mililitro. \n");
	printf("2. Centímetro cúbicos. \n");
	printf("3. Metros cúbicos. \n");
	scanf("%f", &op_conv);
	
	if(op_conv == 1){
		l_m = l * 0.0010000;
		printf("A Conversão para Mililitro de %.0f L é: %.4f ml", l, l_m);
	}
		else if(op_conv == 2){
			l_cc = l / 0.0010000;
			printf("A Conversão para Centímetro cúbicos de %.0f L é: %.0f cm³", l, l_cc);
		}
			else if(op_conv == 3){
				l_mc = l / 1000.0;
				printf("A Conversão para Metros cúbicos de %.0f L é: %.4f m³", l, l_mc);
			}
				else{
					printf("Escolha Inválida. Somente de 1 á 3, por favor.");
				}
	
	return 0;
}																					// Fim do algoritmo
