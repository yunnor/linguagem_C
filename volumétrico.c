/*	Introdu��o em Desenvolvimento de Software
	Professor: Leandro
	Programador:
	Ruan	
	Matheus	
	Data: 19/03/2018
Vers�o: 5.11
*/

#include<stdio.h>																//Biblioteca Obrigatoria para a cria��o do algoritmo
#include<locale.h>																//Biblioteca para permitir idiomais que cont�m caracteres especiais
#include<math.h>																//Biblioteca para incluir fun��es matem�ticas


main(){																			// Entrada do Algoritmo
	
	setlocale(LC_ALL,"Portuguese");												// Permitindo os caracteres especiais do Portugues-Brasil
	
	float l_m, l_cc, l_mc,total,l,op_conv;										// Declarando a variavel
	
	printf("Insira o n�meros de Litros que deseja converter: ");
	scanf("%f", &l);
	
	printf("Escolha a convers�o que deseja fazer: \n");
	printf("1. Mililitro. \n");
	printf("2. Cent�metro c�bicos. \n");
	printf("3. Metros c�bicos. \n");
	scanf("%f", &op_conv);
	
	if(op_conv == 1){
		l_m = l * 0.0010000;
		printf("A Convers�o para Mililitro de %.0f L �: %.4f ml", l, l_m);
	}
		else if(op_conv == 2){
			l_cc = l / 0.0010000;
			printf("A Convers�o para Cent�metro c�bicos de %.0f L �: %.0f cm�", l, l_cc);
		}
			else if(op_conv == 3){
				l_mc = l / 1000.0;
				printf("A Convers�o para Metros c�bicos de %.0f L �: %.4f m�", l, l_mc);
			}
				else{
					printf("Escolha Inv�lida. Somente de 1 � 3, por favor.");
				}
	
	return 0;
}																					// Fim do algoritmo
