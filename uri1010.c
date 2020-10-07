#include <stdio.h>

int main()
{
    int codigoPeca1, quantidadePeca1, codigoPeca2, quantidadePeca2;
    double valorUnitarioPeca1, valorUnitarioPeca2, valorApagar;

    scanf("%d%d%lf", &codigoPeca1, &quantidadePeca1, &valorUnitarioPeca1);
    scanf("%d%d%lf", &codigoPeca2, &quantidadePeca2, &valorUnitarioPeca2);

    valorApagar = (double)(quantidadePeca1 * valorUnitarioPeca1) + (quantidadePeca2 * valorUnitarioPeca2);

    printf("VALOR A PAGAR: R$ %.2lf\n", valorApagar);

    return 0;
}