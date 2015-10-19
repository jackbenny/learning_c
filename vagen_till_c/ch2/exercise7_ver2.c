#include <stdio.h>

/* Another solution to to exercise 7, chapter 2, "Vägen till C".
 * Not done yet...
 */

int main()
{
    char c[100];
    scanf("%100[0-9a-zA-Z ]", c);
    printf("%s\n", c);
}
