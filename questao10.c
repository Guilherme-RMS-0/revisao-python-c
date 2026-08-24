#include <stdio.h>

int main() {
    int quantidade = 0;
    int numero;

    for (int i = 0; i < 5; i++) {
        printf("Numero: ");
        scanf(" %d", &numero);

        if (numero > 0) {
            quantidade += 1; // ou quantidade++;
        }
    }

    printf("Positivos: %d\n", quantidade);

    return 0;
}