#include <stdio.h>

int main()
{
    float cap, want, interest;
    int year;

    printf("Invested capital: "); scanf("%f", &cap);
    printf("Want sum: "); scanf("%f", &want);
    printf("Interest? "); scanf("%f", &interest);
    
    year = 0;

    while (cap < want)
    {
        year = year + 1;
        cap = cap * (1 + interest / 100);
    }

    printf("The capital will have to be at the bank for %d years\n", year);
    return 0;
}
