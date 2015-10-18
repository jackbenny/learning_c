#include <stdio.h>

/* My solution to exercise 6 chapter 2 from "Vägen till C".
 * Rewrite excercise 3 to let square and cube be functions
 */

int square(int j)
{
    j = j*j;
    return j;
}

int cube(int k)
{
    k = k*k*k;
    return k;
}

int main()
{
    int n, i, s;
    s = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf(" i     i*i     i*i*i \n");
    printf("===   =====   =======\n");

    for(i=0; i<=n; i++)
    {
        printf(" %1d %7d %8d \n", s, square(s), cube(s));
        s++;
    }

    return 0;
}

