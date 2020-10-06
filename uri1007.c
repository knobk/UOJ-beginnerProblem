#include <stdio.h>

int main()
{
    int A, B, C, D, DIFERANCA;

    scanf("%d%d%d%d", &A, &B, &C, &D);

    DIFERANCA = (A * B - C * D);

    printf("DIFERENCA = %d\n", DIFERANCA);
    
    return 0;
}