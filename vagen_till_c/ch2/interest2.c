#include <stdio.h>

int main()
{
    float cap, interest;
    int year;
    int nrOfYears;
    printf("Invested capial: "); scanf("%f", &cap);
    printf("Interest? "); scanf("%f", &interest);
    printf("How many years? "); scanf("%d", &nrOfYears);
    printf("\n Year     Holding\n ====      =======\n");

    for (year = 1; year <= nrOfYears; year++)
    {
        cap = cap * (1 + interest / 100);
        printf("%5d%13.2f\n", year, cap);
    }
    return 0;
}
