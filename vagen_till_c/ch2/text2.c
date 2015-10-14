#include <stdio.h>

/* Instead of scanf we use getchar to be able to read the entire name, including
 * spaces in between first- and lastname.
 */

int main()
{
    char name[20], c;
    int i;

    printf("Enter your name: ");
    i = 0; // Start with i = 0 for name
    while ((c = getchar()) != '\n') // Get characters for as long as it's not a
    {                               // newline character.
        name[i] = c;                // For each loop, put 'c' into name[i] where
        i++;                        // 'i' is it's current position, increase i
    }                               // for each itteration.
    name[i] = '\0';                 // Then put a '\0' character at the end of
    printf("Hello %s\n", name);     // name to declare end of text.

    return 0;
}
