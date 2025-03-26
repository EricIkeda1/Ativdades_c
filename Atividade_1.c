//Algoritmo para calcular a temperatura em graus celsius e aparesentar em graus fahrenheit
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (1.8 * celsius) + 32;

    printf("A temperatura em Fahrenheit: %f F\n", fahrenheit);

    return 0;
}
