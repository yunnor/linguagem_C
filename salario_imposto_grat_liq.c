#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	char classif;
	int cod;
	float sb,ts,i,g,sl;
	
	printf("Insira seu código de matricula: ");
	scanf("%d", &cod);
	
	printf("Insira seu salário: ");
	scanf("%f", &sb);
	
	printf("Insira quanto tempo está no serviço (anos): ");
	scanf("%f", &ts);
	
	printf("Imposto de acordo com o seu salário\n\n");
	printf("     Salario	|	Porcentagem \n\n");
	printf("        <800	|	0 °/o\n");
	printf("  >=801 e <=1500|	3 °/o\n");
	printf(" >=1501 e <4000	|	8 °/o\n");
	printf("       >=4000	|	12 °/o\n");
	
	if(sb>=0){
		if(ts>=0){
			if(sb<800){
				i = 0;
			}
			else{
				if(sb<=1500){
					i = sb * 0.03;
				}
				else{
					if(sb<=4000){
						i = sb * 0.08;
					}
					else{
						i = sb * 0.12;
					}
				}
			}
		}
		else{
			printf("Número inválido!");
		}
	}
	else{
		printf("Número inválido!");
	}
	
	if(sb>1500){
		if(ts<=3){
			g = 20;
		}
		else{
				g = 30;
		}
	}
	else{
		if(ts<=3){
			g = 23;
		}
		else{
			if(ts >3 && ts <=6){
				g = 35;
			}
			else{
				g = 33;
			}
		}
	}
	
	if(sl <= 1000){
		classif = 'A';
	}
	else{
		if( sl >2500){
			classif = 'C';
		}
		else{
			classif = 'B';
		}
	}
	
	sl = sb - i + g;
	
	printf("Relatorio\n\n");
	printf("O valor do imposto: %.2f\n", i);
	printf("A gratificação: %0.f\n", g);
	printf("O salario liquido: %4.2f\n", sl);
	printf("A classificação do seu salario está na categoria %c .", classif);
	printf("O tempo de serviço é: %0.f anos.", ts);
	
return 0;
}

