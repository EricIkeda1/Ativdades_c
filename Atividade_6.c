//6.	Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua distância da origem (0,0). Dica: use a formula D = SQRT (x^2 + y^2)
#include <stdio.h>
#include <math.h>

int main() {
    float x, y, distancia;

    printf("Digite a coordenada x: ");
    scanf("%f", &x);

    printf("Digite a coordenada y: ");
    scanf("%f", &y);
    distancia = sqrt((x * x) + (y * y));

    printf("A distancia do ponto (%f, %f) ate a origem (0, 0) e: %f\n", x, y, distancia);

    return 0;
}
