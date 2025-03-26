//9.	Criar um algoritmo que receba como entrada os valores dos catetos de um triângulo retângulo e com base no Teorema de Pitágoras (HIPOTENUSA² = CATETO1² + CATETO2²),
//o algoritmo deve imprimir o valor da hipotenusa, que é igual a raiz quadrada da soma dos quadrados dos catetos.
//Dica: para este cálculo, é necessário calcular a raiz quadrada de um número. Considere o comando SQRT(x); que calcula a raiz quadrada de x.
#include <stdio.h>
#include <math.h>

int main() {
    float cateto1, cateto2, hipotenusa;

    printf("Informe o valor do cateto 1: ");
    scanf("%f", &cateto1);

    printf("Informe o valor do cateto 2: ");
    scanf("%f", &cateto2);

    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    printf("O valor da hipotenusa e: %f\n", hipotenusa);

    return 0;
}
