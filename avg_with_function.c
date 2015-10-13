#include <stdio.h>

float max(float x, float y)
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

int main()
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
        biggest = max(biggest, number);
    }

    printf("Average:    %.2f\n", sum / ant);
    printf("Biggest:    %.2f\n", biggest);

    return 0;
}
