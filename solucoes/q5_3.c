#include <stdio.h>
#include <locale.h>
#define none -1

void lervetor(int vetp[]) {
	int i;
	for (i = 0; i<=9; i++) {
		printf("Digite o %d° elemento: ", i+1);
		scanf("%d", &vetp[i]);
	}
}

void pesquisar(int num, int vetp2[]) {
	int p = none, j;
	for (j = 0; j<=9; j++) {
		if (vetp2[j] == num) {
			p = j+1;
		}
	}
	if (p == none) {
		printf("VALOR NÃO ENCONTRADO!");
	}
	else {
		printf("VALOR ENCONTRADO!\nPosição: %d", p);
	}
}

int main() {
	setlocale(LC_ALL, "");
	int VET[10], n;
	lervetor(VET);
	printf("Digite o valor que deseja pesquisar no vetor: ");
	scanf("%d", &n);
	pesquisar(n, VET);
	return 0;
}
