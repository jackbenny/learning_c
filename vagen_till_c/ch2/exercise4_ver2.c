#include <stdio.h>
#define GOAL 100*1000000
/* My solution to exercise 4, chapter 2 from "Vägen till C".
 * A man is offered a highly dangerous job, with an unusual salary.
 * First day he'll get 1 cent, second day 2 cents, third day 4 cents and so on.
 * Write a program to calculate how many days he'll have to work to reach one
 * million dollar.
 */

int main()
{
    int salary = 1;
    int days = 1;
    int tot = 0;
    
    while(tot<=GOAL)
    {
        salary = salary * 2;
        tot += salary;
        days++;
    }
    printf("He'll have to work %d days to reach %d dollar\n", days, GOAL/100);
}
