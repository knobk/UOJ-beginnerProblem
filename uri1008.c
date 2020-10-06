#include <stdio.h>

int main()
{
    int number, workedHours;
    double hourlyValue, salary;

    scanf("%d%d%lf", &number, &workedHours, &hourlyValue);

    salary = (double)workedHours * hourlyValue;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", salary);

    return 0;
}