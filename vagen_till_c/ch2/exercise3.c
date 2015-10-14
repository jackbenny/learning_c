#include <stdio.h>

/* My solution to exercise 3, chapter 2, from the book "Vägen till C".
 * Write a program to produce a table with the square and cube up to a given
 * number, starting from 1.
 */

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
        printf(" %1d %7d %8d \n", s, s*s, s*s*s);
        s++;
    }

    return 0;
}

