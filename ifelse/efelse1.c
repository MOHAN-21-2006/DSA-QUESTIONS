#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter Any  Number:");
    scanf("%d", &a);
    printf("Enter Any  Number:");
    scanf("%d", &b);
    printf("Enter Any  Number:");
    scanf("%d", &c);
    if (a > b && a > c)
        printf("%d is The Biggest Number ", a);
    else if (b > a && b > c)
        printf("%d is The Biggest Number ", b);
    else if (c > a && c > b)
        printf("%d is The Biggest Number ", c);
    else
        printf("Enter A Valide Number ");

    return 0;
}