//8.	Calcule o consumo m�dio de um autom�vel sendo fornecidos a dist�ncia total percorrida (em Km) e o
//total de combust�vel gasto (em litros). A entrada do programa cont�m dois valores: um valor inteiro X representando
//a dist�ncia total percorrida (em Km), e um valor real Y representando o total de combust�vel gasto, com um d�gito ap�s o ponto decimal.
//No final, apresente o valor que representa o consumo m�dio do autom�vel seguido da mensagem "km/l".
#include <stdio.h>

int main() {
    int distancia;
    float combustivel, consumo_medio;

    printf("Informe a distancia total percorrida (em Km): ");
    scanf("%d", &distancia);

    printf("Informe o total de combust�vel gasto (em litros): ");
    scanf("%f", &combustivel);

    consumo_medio = distancia / combustivel;

    printf("Consumo medio: %f km/l\n", consumo_medio);

    return 0;
}
