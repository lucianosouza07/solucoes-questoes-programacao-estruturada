#include <stdio.h>
#include <locale.h>


void leremultiplicarvetor() {
	int vet[8], i, multi = 1;
	for (i = 0; i<=7; i++) {
		printf("Digite o elemento da %d° posição: ", i+1);
		scanf("%d", &vet[i]);
		printf("\n");
	}
	i = 0;
	for (i = 0; i <= 7; i++) {
		multi = multi*vet[i];
	}
	printf("O produto dos elementos do vetor é: %d", multi);
}

int main() {
	setlocale(LC_ALL, "");
	leremultiplicarvetor();
	return 0;
}
