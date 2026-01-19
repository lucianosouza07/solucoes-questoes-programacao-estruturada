#include <stdio.h>
#include <locale.h>

void lervetor(int vetp[]) {
	int i;
	for (i = 0; i<=7; i++) {
		printf("Digite o %d° elemento: ", i+1);
		scanf("%d", &vetp[i]);
	}
}

void multiplicarvetor(int vetp1[], int vetp2[]) {
	int j, C[8];
	for (j = 0; j<=7; j++) {
		C[j] = vetp1[j] * vetp2[j];
	}
	j = 0;
	printf("Os produtos entre os elementos dos vetores A e B é: ");
	for (j = 0; j<=7; j++) {
		printf("%d ", C[j]);		
	}
}

int main() {
	setlocale(LC_ALL, "");
	int A[8], B[8];
	printf("VETOR A: \n");
	lervetor(A);
	printf("VETOR B: \n");
	lervetor(B);
	multiplicarvetor(A,B);
	return 0;
}
