#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C, maiorAB, maior;

    scanf("%d%d%d", &A, &B, &C);

    maiorAB = (A + B + abs(A - B)) / 2;

    maior = maiorAB;
    
    if (C > maiorAB)
    {
        maior = C;
    }  

    // maior = A;
    // if (maior < B)  
    // {
    //     maior = B;
    // }
    // if (maior < C)
    // {
    //     maior = C;
    // }     

    printf("%d eh o maior\n", maior);

    return 0;
}