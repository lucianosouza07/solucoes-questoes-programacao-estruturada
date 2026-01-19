#include <stdio.h>

int main() {
	int num_ant = 0, num = 1, prox_num, c, n;
	printf("Quantos termos da sequencia de fibonacci voce deseja? ");
	scanf("%d", &n);
	printf("%d\n", num);
	for (c = 1; c <= n-1; c++) {
		prox_num = num+num_ant;
		num_ant = num;
		num = prox_num;
		printf("%d\n", prox_num);
	}
	return 0;
}