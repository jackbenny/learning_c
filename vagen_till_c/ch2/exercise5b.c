#include <stdio.h>
#define DISCOUNT 10.0
#define LIMIT 1000

/* Write a program that gives a customer 10% off the total price when he shops
 * for at least 1000 SEK. Assume for simplicity that he only shops one kind of
 * product.
 */

int main()
{
    int items;
    float subtotal, total, price;

    printf("Number of items: "); scanf("%d", &items);
    printf("Price per unit: "); scanf("%f", &price);
    
    subtotal = price * items;

    if (subtotal >= LIMIT)
    {
        total = subtotal*((100-DISCOUNT)/100);
    }
    else
    {
        total = subtotal;
    }

    printf("Total price: %.2f\n", total);
    return 0;
}
