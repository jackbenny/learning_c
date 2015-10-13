#include <stdio.h>
#include <math.h>

/* Simple program to calculate the area and circumference of a circle.
 * Remeber to compile with the -lm option to link the math library.
 * The math library includes pow (to the power of) and M_PI (pi).
 */

int main()
{
    float radius;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of the circle is: %.2f\n", M_PI*(pow(radius, 2))); 
    printf("Circumference of the circle is: %.2f\n", 2*M_PI*radius); 
    return 0;
}
