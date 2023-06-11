#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number;
    float sum = 0;

    printf("Please enter a number: ");
    scanf("%f", &number);

    for (int i = 1; i <= number; i++)
    {
        sum = (1.0 / i) + sum;
    }

    printf("Sum of the series: %.2f", sum);

    return 0;
}
