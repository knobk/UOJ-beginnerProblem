#include <stdio.h>

int main()
{
    double tempoGasto, velocidadeMedia, distanciaPercorrida;

    scanf("%lf%lf", &tempoGasto, &velocidadeMedia);

    distanciaPercorrida = tempoGasto * velocidadeMedia / 12.0;

    printf("%.3lf\n", distanciaPercorrida);

    return 0;
}