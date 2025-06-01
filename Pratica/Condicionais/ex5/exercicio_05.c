#include <stdio.h>
#include <string.h>

int main() {
    char login[50];

    printf("Digite o login: ");
    fgets(login, sizeof(login), stdin);

    login[strcspn(login, "\n")] = '\0';

    if (strcmp(login, "admin") == 0) {
        printf("Login bem-sucedido!\n");
    } else {
        printf("Usuario invalido.\n");
    }

    return 0;
}
