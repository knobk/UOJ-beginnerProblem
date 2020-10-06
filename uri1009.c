#include <stdio.h>

int main()
{
    char name;
    double fixedSalary, salesAmount, total;

    scanf("%s%lf%lf", &name, &fixedSalary, &salesAmount);

    total = fixedSalary + salesAmount * 0.15;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}