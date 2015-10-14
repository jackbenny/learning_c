#include <stdio.h>

/* A simple program from the book "Vägen till C" to calculate for how long your
 * money will have to sit in the bank at a given interest rate to reach the
 * amount of money you'll want
 */

int main()
{
    float cap, want, interest;
    int year;

    printf("Invested capital: "); scanf("%f", &cap);
    printf("Want sum: "); scanf("%f", &want);
    printf("Interest? "); scanf("%f", &interest);
    
    year = 0;

    /* As long as your capital at the bank is less than you want, keep rerunning
     * the loop until we reach the amout we want. Each loop is one year.
     */ 
    while (cap < want)
    {
        year = year + 1;
        cap = cap * (1 + interest / 100);
    }

    printf("The capital will have to be at the bank for %d years\n", year);
    return 0;
}
