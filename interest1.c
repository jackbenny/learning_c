#include <stdio.h>
#define YEARS 10

int main()
{
    float cap, interest;
    int year;
    printf("Invested capial: "); scanf("%f", &cap);
    printf("Interest? "); scanf("%f", &interest);
    printf("\n Year     Holding\n ====      =======\n");

    for (year = 1; year <= YEARS; year++)
    {
        cap = cap * (1 + interest / 100);
        printf("%5d%13.2f\n", year, cap);
    }
    return 0;
}
