#include <stdio.h>
#include <math.h>

/* Simple program to calculate the area of a circles, triangles and rectangles.
 * Remeber to compile with the -lm option to link the math library.
 * The math library includes pow (to the power of) and M_PI (pi).
 */

float circle(float r)
{
    return M_PI*(pow(r, 2)); // pow and M_PI is from math.h
}

float triangle(float b, float h) 
{
    return b*h/2; // the return value is a float, since the function is a float
}

float rectangle(float b, float h)
{
    return b*h; // the return value is a float, since the function is a float
}


int main()
{
    int choice;
    float area, radius, base, hight;

    printf("1. Circle\n2. Triangle\n3. Rectangle\n> ");
    scanf("%d", &choice); //%d for integers

    if (choice == 1)
    {
        printf("\nEnter radius of the circle: "); scanf("%f", &radius);
        area = circle(radius);
        printf("\nArea of the circle is %.2f\n", area); //%.2f for 2 decimals
    }
    else if (choice == 2)
    {
        printf("\nEnter the triangles base: "); scanf("%f", &base);
        printf("\nEnter the tirangles hight: "); scanf("%f", &hight);
        area = triangle(base, hight);
        printf("\nThe triangles area is %.2f\n", area); 
    }
    else if (choice == 3)
    {
        printf("\nEnter the rectangles base: "); scanf("%f", &base);
        printf("\nEnter the rectangles hight: "); scanf("%f", &hight);
        area = rectangle(base, hight);
        printf("\nThe rectangles area is %.2f\n", area); 
    }
    else
    {
        printf("\nInvalid choice, quitting...\n");
        return 1; // Return value greater than 0 for errors
    }

    return 0; // Return 0 if everything went ok
}
