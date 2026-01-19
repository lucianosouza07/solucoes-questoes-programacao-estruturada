#include <stdio.h>

main() {
	float n1, n2, soma;
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	soma = n1+n2;
	printf("A soma de %.2f com %.2f e igual a: %.2f",n1,n2,soma);
}
