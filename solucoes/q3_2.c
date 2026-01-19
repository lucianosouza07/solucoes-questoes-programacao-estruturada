#include <stdio.h>

int main() {
	int a, b, num, soma = 0, c;
	printf("Digite o valor inicial do intervalo: ");
	scanf("%d", &a);
	printf("Digite o valor final do intervalo: ");
	scanf("%d", &b);
	for (c = a; c <= b; c++) {
		if (c % 2 == 1) {
			soma = soma + c;
		}
	}
	printf("O valor da soma dos numeros impares entre %d e %d e: %d", a, b, soma);
	return 0;
}