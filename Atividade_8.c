//8.	Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o
//total de combustível gasto (em litros). A entrada do programa contém dois valores: um valor inteiro X representando
//a distância total percorrida (em Km), e um valor real Y representando o total de combustível gasto, com um dígito após o ponto decimal.
//No final, apresente o valor que representa o consumo médio do automóvel seguido da mensagem "km/l".
#include <stdio.h>

int main() {
    int distancia;
    float combustivel, consumo_medio;

    printf("Informe a distancia total percorrida (em Km): ");
    scanf("%d", &distancia);

    printf("Informe o total de combustível gasto (em litros): ");
    scanf("%f", &combustivel);

    consumo_medio = distancia / combustivel;

    printf("Consumo medio: %f km/l\n", consumo_medio);

    return 0;
}
