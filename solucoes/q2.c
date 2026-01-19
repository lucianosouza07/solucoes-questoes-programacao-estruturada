#include <stdio.h>

main() {
	float p1, p2, p3, media;
	printf("Digite o primeiro preco: R$");
	scanf("%f", &p1);
	printf("Digite o segundo preco: R$");
	scanf("%f", &p2);
	printf("Digite o terceiro preco: R$");
	scanf("%f", &p3);
	media = (p1+p2+p3)/3;
	printf("A media entre os precos digitados é: R$%.2f", media);
}
