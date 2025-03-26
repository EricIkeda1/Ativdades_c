//7.Construa um algoritmo que calcule a quantidade de latas de tinta necessárias e o custo para pintar tanques cilíndricos de combustível,
//em que são fornecidos a altura e o raio deste cilindro. Sabe-se que:
//•	A lata de tinta custa $ 50,00.
//•	Cada lata tem 5 litros.
//•	Cada litro de tinta pinta 3 metros quadrados.
//Dica: você vai precisar primeiro calcular a área do cilindro, para sabe quantos metros quadrados vai precisar pintar,
//para depois calcular o custo e a quantidade de tintas. Para calcular a área do cilindro, utilize a fórmula: A = πr² + 2πrh (r = raio e h = altura do tanque).

#include <stdio.h>

#define PRECO_LATA 50.00
#define LITROS_POR_LATA 5
#define RENDIMENTO_LITRO 3
#define PI 3.14159

int main() {
    float altura, raio, area, litros_necessarios, latas_necessarias, custo_total;

    printf("Informe o raio do tanque (em metros): ");
    scanf("%f", &raio);

    printf("Informe a altura do tanque (em metros): ");
    scanf("%f", &altura);

    area = PI * raio * raio + 2 * PI * raio * altura;

    litros_necessarios = area / RENDIMENTO_LITRO;

    latas_necessarias = (int)(litros_necessarios / LITROS_POR_LATA);
    if (litros_necessarios / LITROS_POR_LATA > latas_necessarias) {
        latas_necessarias++;
    }

    custo_total = latas_necessarias * PRECO_LATA;

    printf("Area a ser pintada: %f m\n", area);
    printf("Quantidade de latas necessarias: %f\n", latas_necessarias);
    printf("Custo total: R$ %f\n", custo_total);

    return 0;
}
