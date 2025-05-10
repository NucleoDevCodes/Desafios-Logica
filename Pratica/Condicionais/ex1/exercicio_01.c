#include <stdio.h>

int main() {
	int idade, podeEntrar;

	printf("Digite a sua idade: ");
	scanf("%d", &idade);

	podeEntrar = idade >= 18 ? 1 : 0;

	if (podeEntrar == 1) {
		printf("Voce pode entrar no evento.");
	} else {
		printf("Voce nao pode entrar no evento.");
	}
}