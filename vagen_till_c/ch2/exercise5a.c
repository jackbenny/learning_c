#include <stdio.h>

/* Write a program that gives a customer 10% off the total price when he shops
 * for at least 1000 SEK. Assume for simplicity that he only shops one kind of
 * product.
 */

int main()
{
    float discount = 10;
    int limit = 1000;
    int items;
    float subtotal, total, price;

    printf("Number of items: "); scanf("%d", &items);
    printf("Price per unit: "); scanf("%f", &price);
    
    subtotal = price * items;

    if (subtotal >= limit)
    {
        total = subtotal*((100-discount)/100);
    }
    else
    {
        total = subtotal;
    }

    printf("Total price: %.2f\n", total);
    return 0;
}
