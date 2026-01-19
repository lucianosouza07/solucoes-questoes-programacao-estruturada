#include <stdio.h>
#include <locale.h>
#define true 1
#define false 0
#define bool int

void lervetor(int vetp1[], int tamanho) {
	int i;
	for (i=0; i<tamanho; i++) {
		printf("Digite o %d° número: ", i+1);
		scanf(" %d", &vetp1[i]);
	}
}

int removerrep(int vetp2[], int vetp3[], int tamanho) {
	int j, k, p = 0;
	bool foiencontra;
	for (j = 0; j<tamanho; j++) {
		for (k = 0; k<=p; k++) {
			foiencontra = false;
			if (vetp2[j] == vetp3[k]) {
				foiencontra = true;
				break;
			}
		}
		if (foiencontra == false) {
			vetp3[p] = vetp2[j];
			p++;
		}
	}
	return p;
}

void exibirvetor(int vetp4[], int tamanho) {
	int l;
	for (l = 0; l < tamanho; l++) {
		printf("%d ", vetp4[l]);
	}
}

int main() {
	setlocale(LC_ALL, "");
	int vet[20], vetsr[20], tamrep;
	lervetor(vet, 20);
	tamrep = removerrep(vet, vetsr, 20);
	printf("VETOR ORIGINAL: ");
	exibirvetor(vet, 20);
	printf("\nVETOR SEM REPETIÇÃO: ");
	exibirvetor(vetsr, tamrep);
	return 0;
}            
