#include <stdio.h>
#include <string.h>

int main() {
	char fruta[50];

	printf("Digite a fruta da receita: ");
	fgets(fruta, sizeof(fruta), stdin);

	fruta[strcspn(fruta, "\n")] = '\0';

	if (strcmp(fruta, "laranja") == 0 || strcmp(fruta, "abacaxi") == 0) {
		printf("Fruta compativel para a receita.");
	} else {
		printf("Fruta incompativel para a receita.");
	}
}