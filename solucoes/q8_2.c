#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int n, i, qntddiv = 0;
	printf("Digite um número: ");
	scanf("%d", &n);
	if ("")
	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			qntddiv++;
		}
	}
	if (qntddiv == 2) {
		printf("O número %d é primo.", n);
	}
	else {
		printf("O número %d não é primo.", n);
	}
	return 0;
}
