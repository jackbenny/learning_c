#include <stdio.h>

int main()
{
    int a;
    int b;
    char c[20];
    printf("%d  %d", sizeof(a), sizeof(c));

    b = sizeof(c);
    printf("\n%d\n", b);
}
