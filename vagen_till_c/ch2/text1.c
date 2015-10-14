#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name: "); 
    // scanf("%s", name); // Unsafe since name is limited to 20 characters
    scanf("%19s", name); // Much safer
    printf("Hello %s\n", name);
}
