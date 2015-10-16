#include <stdio.h>
#include <math.h>

/* Simple program to calculate the area and circumference of a circle.
 * Remeber to compile with the -lm option to link the math library.
 * The math library includes pow (to the power of) and M_PI (pi).
 */

int main()
{
    float b, h;
    scanf("%f%f", &b, &h);
    printf("%.3f\n", (b*h)/2); 
    return 0;
}
