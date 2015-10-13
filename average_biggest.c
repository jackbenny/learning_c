#include <stdio.h>

int main()
{
    float nr, sum, biggest;
    int ant;
    sum = 0;
    biggest = 0;
    ant = 0;

    printf("Write the numbers.\n");
    printf("Finish with EOF.\n");
    while (scanf("%f", &nr) == 1)
    {
        ant++;
        sum += nr;
        if (nr > biggest)
        {
            biggest = nr;
        }
    }
    
    printf ("Average:    %.3f\n", sum / ant);
    printf ("Biggest:    %.3f\n", biggest);
 
   return 0;
}
