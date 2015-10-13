#include <stdio.h>

int main()
{
    float nr1, nr2;
    printf("First number: ");
    scanf("%f", &nr1);
    printf("Second number: ");
    scanf("%f", &nr2);
    printf("Total: %.2f\n", nr1+nr2);
    printf("Average: %.2f\n", (nr1+nr2)/2);
    return 0;
}
