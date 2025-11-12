#include<stdio.h>
int main()
{
    float f,temp;
    printf("Enter Tempature in  Fehrenite :");
    scanf("%f",&f);
    temp = (f-32)*5/9;
    printf("The Temprature in celciaus is :%f",temp);
    return 0;

}