#include <stdio.h>

int main() {

    float celsius;

    printf("Temperatura em Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = (celsius * 9 / 5) + 32;

    printf("fahrenheit: %.2f\n", fahrenheit);

    return 0;

}