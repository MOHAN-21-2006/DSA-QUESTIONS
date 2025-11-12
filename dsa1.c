#include<stdio.h>
#define pi 3.14
int main()
{
    int r,rad;
    printf("Enter The Radiaus of Circle :");
    scanf("%d",&r);
    rad = pi*r*r;
    printf("The Area Of Circle is :%d",rad);
    return 0;
}