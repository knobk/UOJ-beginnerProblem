#include <stdio.h>

int main() {
    const double n = 3.14159;
    double area = 0.0, raio = 0.0;

    scanf("%lf", &raio);
    area = raio * raio * n;

    printf("A=%.4lf\n", area);
        
    return 0;
}