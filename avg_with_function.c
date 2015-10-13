#include <stdio.h>

/* A first example from the book "Vägen till C" where we get to use functions.
 * Here is a function to get the biggest number from a set of numbers.
 */

float max(float x, float y) // It's return value is a float.
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main() // main's return value is an int (return 0 at the bottom).
{
    float number, sum, biggest;
    int ant;
    sum = 0;
    biggest = 0;
    ant = 0;

    printf("Write the numbers\nFinish with EOF\n");
    
    while (scanf("%f", &number) == 1)
    {
        ant++;
        sum += number;
        biggest = max(biggest, number); // biggest goes into x, number into y.
    }

    printf("Average:    %.2f\n", sum / ant);
    printf("Biggest:    %.2f\n", biggest);

    return 0;
}
