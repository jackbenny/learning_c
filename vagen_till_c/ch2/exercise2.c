#include <stdio.h>

/* My solution to exercise 2, chapter 2 from "Vägen till C".
 * Write a program to calculate how many km a car has been driven during a year
 * a much fuel it consumes on avererage
 */

int main()
{
    float km_today, km_lastyear, fuel;
    
    printf("Odometer last year: ");
    scanf("%f", &km_lastyear);
    printf("Odometer today: ");
    scanf("%f", &km_today);
    printf("Total fuel consumed during the year: ");
    scanf("%f", &fuel);

    printf("\nTotal distance driven: %.1f\n", km_today-km_lastyear);
    printf("Average fuel consumption: %.2f\n", fuel/(km_today-km_lastyear));

    return 0;
}

