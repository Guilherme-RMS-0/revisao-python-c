#include <stdio.h>

int main() {
    
    int a;
    int b;

    printf("primeiro valor: ");
    scanf("%d", &a);

    printf("segundo valor: ");
    scanf("%d", &b);

    if (a > b) {
        printf("Maior: %d\n", a);
    }
    else {
        printf("Maior: %d\n", b);
    }
    return 0;
}