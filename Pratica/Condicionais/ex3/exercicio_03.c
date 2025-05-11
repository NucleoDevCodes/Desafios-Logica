#include <stdio.h>
#include <string.h>

int main() {
	int idade;
	char classificacao[50];

	printf("Digite a idade da(o) aluna(o): ");
	scanf("%d", &idade);

	if (idade < 12) {
		strcpy(classificacao, "Infantil");
	} else if (idade < 18) {
		strcpy(classificacao, "Juvenil");
	} else {
		strcpy(classificacao, "Adulto");
	}

	printf("A faixa etaria da aluna(o) e %s", classificacao);
}