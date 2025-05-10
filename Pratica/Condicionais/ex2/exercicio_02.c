#include <stdio.h>

int main() {
	int temperatura;

	printf("Digite a temperatura: ");
	scanf("%d", &temperatura);

	if (temperatura < 15) {
		printf("O clima esta frio.");
	} else if (temperatura < 25) {
		printf("O clima esta agradavel.");
	} else {
		printf("O clima esta quente.");
	}
}