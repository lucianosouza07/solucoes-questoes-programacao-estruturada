#include <stdio.h>

int lernum(int *cont) {
	int num;
	printf("Digite o %do número: ", *cont);
	scanf("%d", &num);
	(*cont)++;
	return num;
}

void verificacao(int num, int *par, int *impar) {
	if (num % 2 == 0) {
		(*par)++;
	}
	else {
		(*impar)++;
	}
}

int main(){    
	int cont = 1, n = 0, par = 0, impar = 0;
	while (n != -1) {
		n = lernum(&cont);
		verificacao(n, &par, &impar);
	}
	printf("Quantidade de numeros pares:  %d\n", par);
	printf("Quantidade de numeros impares:  %d", impar);
	return 0;            
}
