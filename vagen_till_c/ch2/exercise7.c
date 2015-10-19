#include <stdio.h>

/* My solution to exercise 7 chapter 2 from "Vägen till C".
 * Not done yet...
 */

int main()
{
    char c, all[100];
    int i = 0;
    int j= 0;

    while ((c = getchar()) != EOF)
    {
        all[i] = c;
        i++;
    }
    all[i] = '\0';

    while (all[j] != EOF)
    {
        if (all[i] == ' ' || all[i] == '\n')
        {
            putchar('\n');
        } 
        putchar(all[j]);
        j++;
    }
    putchar('\n');
}
