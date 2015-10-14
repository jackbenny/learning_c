#include <stdio.h>

/* A program to calculate the average of a set of numbers and the biggest
 * of those numbers. From the book "Vägen till C". Translated it to english.
 */

int main()
{
    float nr, sum, biggest;
    int ant;
    sum = 0;
    biggest = 0;
    ant = 0;

    printf("Write the numbers.\n");
    printf("Finish with EOF.\n"); // EOF is CTRL-D in Unix/Linux
    while (scanf("%f", &nr) == 1) // As long as we get characters to scanf, it's
    {                             // true, ie '1'.
        ant++;
        sum += nr;                // Same as sum = sum + nr.
        if (nr > biggest)         // If 'nr' is bigger than 'biggest', make 'nr'
        {                         // the new 'biggest' value.
            biggest = nr;
        }
    }
    
    printf ("Average:    %.3f\n", sum / ant);
    printf ("Biggest:    %.3f\n", biggest);
 
   return 0;
}
