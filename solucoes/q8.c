#include <stdio.h>

main() {
	int n, p_alg, u_alg, soma;
	printf("Digite um numero de quatro algarismos: ");
	scanf("%d", &n);
	p_alg = (int)(n/100);
	u_alg = (int)(n%100);
	soma = p_alg+u_alg;
	if ((soma)*(soma)==n){
		printf("O numero %d possui a propriedade:\n%d + %d = %d e (%d)^2 = %d", n, p_alg, u_alg, soma, soma, n);
	}
	else {
		printf("O numero %d nao possui a propriedade:\n%d + %d = %d e (%d)^2 != %d", n, p_alg, u_alg, soma, soma, n);
	}
}