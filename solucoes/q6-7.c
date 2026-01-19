#include <stdio.h>

main() {
	int resultado, n, alg_cen, alg_dez, alg_uni;
	printf("Digite um numero de tres algarismos: ");
	scanf("%d", &n);
	alg_cen = (int)(n/100);
	alg_dez = (int)((n%(alg_cen*100)/10));
	alg_uni = (int)((n%(alg_cen*100+alg_dez*10)));
	resultado = alg_uni*100+alg_dez*10+alg_cen;
	printf("O numero %d escrito inversamente e: %d", n, resultado);
}