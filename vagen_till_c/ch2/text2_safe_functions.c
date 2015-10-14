#include <stdio.h>

void readline(int s, char line[])
{
    char c;
    int i;
    i = 0;

    while (( c = getchar()) != '\n')
    {
        line[i] = c;
        i++;
        if (i >= s-1)
        {
            break;
        }
    }
    line[i] = '\0';
}

int main()
{
    char name[20];
    int size;
    size = sizeof(name);
    printf("Enter your name: ");
    readline(size, name);
    printf("Hello %s\n", name);
}
