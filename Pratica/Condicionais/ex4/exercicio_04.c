#include <stdio.h>

int main() {
	int diaDaSemana;

	printf("0: Domingo.\n");
	printf("1: Segunda-feira.\n");
	printf("2: Terca-feira.\n");
	printf("3: Quarta-feira.\n");
	printf("4: Quinta-feira.\n");
	printf("5: Sexta-feira.\n");
	printf("6: Sabado.\n");
	printf("Digite o dia da semana: \n");
	scanf("%d", &diaDaSemana);

	if (diaDaSemana >= 1 & diaDaSemana <= 5) {
		printf("A loja esta aberta no horario normal: 9h as 18h.");
	} else if (diaDaSemana == 0 || diaDaSemana == 6) {
		printf("A loja esta aberta em horario especial: 10h as 14h.");
	} else {
		printf("Valor invalido.");
	}
}