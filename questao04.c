#include <stdio.h>

int main() {

    int numero;

    printf("Numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d Par\n", numero);
    } else {
        printf("%d Impar\n", numero);
    
    }
    return 0;
    }
    
