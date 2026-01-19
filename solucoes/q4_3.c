#include <stdio.h>
#include <locale.h>

void lervetor(int vetp[]) {
	int i;
	for (i = 0; i<=11; i++) {
		printf("Digite o %d° elemento: ", i+1);
		scanf("%d", &vetp[i]);
	}
}

void maiorelemento(int vetp[]) {
	int i = 0, pma = 1, maior;
	maior = vetp[i];
	for (i = 1; i <= 11; i++) {
		if (maior < vetp[i]) {
			maior = vetp[i];
			pma = i+1;
		}
	}
	printf("Maior elemento: %d\nPosição do Maior elemento: %d \n", maior, pma);
}

void menorelemento(int vetp[]) {
	int i = 0, pme = 1, menor;
	menor = vetp[i];
	for (i = 1; i <= 11; i++) {
		if (menor > vetp[i]) {
			menor = vetp[i];
			pme = i+1;
		}
	}
	printf("Menor elemento: %d\nPosição do Menor elemento: %d", menor, pme);
}

int main() {
	setlocale(LC_ALL, "");
	int vet[12];
	lervetor(vet);
	printf("\n");
	maiorelemento(vet);
	menorelemento(vet);
	return 0;
}
