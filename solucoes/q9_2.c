#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void minusculas(char *str) {
	int c2;
	for (c2 = 0; str[c2] != '\0'; c2++) {
		str[c2] = tolower(str[c2]);
	}
}

int main() {
	setlocale(LC_ALL, "");
	int c = 1, idade, qntdsev = 0, qntdF = 0, qntdM = 0; char nome[20], codigo[3], sexo; float percentual;
	while (strcmp(nome, "fim")) {
		printf("%d° pessoa: \n", c);
		printf("Digite o seu nome: ");
		gets(nome);
		minusculas(nome);
		if(strcmp(nome, "fim") != 0) {
			printf("Digite a sua idade: ");
			scanf(" %d", &idade);
			printf("Digite o seu sexo (M/F): ");
			scanf(" %c", &sexo);
			tolower(sexo);
			if (sexo == 'f') {
				qntdF++;
			}
			else {
				qntdM++;
			}
			printf("Digite o código referente ao seu objetivo: ");
			gets(codigo);
			if (strcmp(codigo, "020") == 0) {
				qntdsev++;	
			}
			c++;
			printf("\n");
		}
	}
	percentual = (float)qntdsev/c * 100;
	printf("\nPercentual de individuos que buscam serviços: %f%% \n", percentual);
	if (qntdF == 0 || qntdM == 0 || qntdF == qntdM) {
		printf("Maior Frequentador: Nenhum/Ambos");
	}
	else {
		if (qntdF > qntdM) {
			printf("Maior Frequentador: Mulheres");
		}
		else {
		printf("Maior Frequentador: Homens");
		}
	}
	return 0;
}
