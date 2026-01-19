#include <stdio.h>
#include <locale.h>

void lervetor(int vetp[]) {
	int i;
	for (i = 0; i<=9; i++) {
		printf("Digite o %do numero: ", i+1);
		scanf("%d", &vetp[i]);
	}
}

void trocaneg(int vetp2[]) {
	int j;
	for (j = 0; j<=9; j++) {
		if (vetp2[j] < 0) {
			vetp2[j] = 1;
		}
	}
	j = 0;
	printf("O vetor digitado com a alteração nos num. negativos é: [ ");
	for (j = 0; j<=9; j++) {
			printf("%d ", vetp2[j]);
		}
	printf("]");
	}

int main() {
	setlocale(LC_ALL, "");
	int n, vet1[10], cont = 0;
	printf("VETOR:\n");
	lervetor(vet1);
	trocaneg(vet1);
	return 0;
}
