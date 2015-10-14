#include <stdio.h>

/* My solution to exercise 1, chapter 2, in "Vägen till C". */

int main()
{
    int i = 0, j = 0;
    char name[20];
    char street[30];
    char n, s;
    int zipcode;

    /* Code to get the name. We use getchar in a while loop to get the entire
     * name, including any whitespaces
     */
    printf("Enter your name: ");
    while (( n = getchar()) != '\n') // Read until newline
    {
        name[i] = n;                 // Set position i of name to n
        i++;                         // Increase i for each itteration
    }
    name[i] = '\0';                  // Last character must be '\0'

    printf("Enter your street address: ");
    while (( s = getchar()) != '\n')
    {
        street[j] = s;               // New counter j
        j++;                         // Increase j for each itteration
    }
    street[j] = '\0';

    printf("Enter your zipcode, without spaces: ");
    scanf("%d", &zipcode);

    printf("\n\nYour name: %s\n", name);
    printf("Street: %s\n", street);
    printf("Zipcode: %d\n", zipcode);

    return 0;
}

