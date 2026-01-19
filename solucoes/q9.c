#include <stdio.h>

int main() {
	float v_kmh, v_ms;
	printf("Digite a velocidade (em KM/H): ");
	scanf("%f", &v_kmh);
	v_ms = v_kmh*3.6;
	printf("%.2f KM/H equivalem a %.2f M/S", v_kmh, v_ms);
}