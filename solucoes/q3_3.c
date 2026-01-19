#include <stdio.h>
#include <locale.h>

void lervetor(int vetp[]) {
	int i = 0;
	while (i <= 9) {
		printf("Digite o %d° elemento: ", i+1);
		scanf("%d", &vetp[i]);
		if (i >= 1) {
			if (vetp[i] < vetp[i-1]) {
				printf("ERRO: Digite um número maior que o anterior. \n");
			}
			else {
				i++;	
			}
		}
		if (i == 0) {
			i++;
		}
	}
}

void inter(int vetp1[], int vetp2[]) {
	int VET3[20], j;
	for (j = 0; j <= 9; j++) {
		VET3[2*j] = vetp1[j];
		VET3[2*j+1] = vetp2[j];
		}
	printf("O vetor intercalado dos elementos dos vetores é: ");
	j = 0;
	for (j = 0; j <= 19; j++) {
		printf("%d ", VET3[j]);
	}
}

int main() {
	setlocale(LC_ALL, "");
	int VET1[10], VET2[10];
	printf("VET1: \n");
	lervetor(VET1);
	printf("VET2: \n");
	lervetor(VET2);
	inter(VET1, VET2);
	return 0;
}
