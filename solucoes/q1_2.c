#include <stdio.h>

int main() {
	int num, menornum, i = 1;
	printf("Digite o %d numero: ", i);
	scanf("%d", &num);
	menornum = num;
	while (num != 0) {
		i = i + 1;
		printf("Digite o %d numero: ", i);
		scanf("%d", &num);
		if (num < menornum && num != 0) {
			menornum = num;
		}
	}
	printf("O menor numero digitado foi: %d", menornum);
	return 0;
	}