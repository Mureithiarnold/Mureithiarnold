// how to convert temp from centigrade to Fahrenheit
#include <stdio.h>
#include<conio.h>
int main()
{
    float centigrade;
    float Fahrenheit;
    printf("enter temperature in centigrades:");
    scanf("%f", & centigrade);
    //(9/5) *centigrade + 32 ;
    Fahrenheit = (9/5)* centigrade + 32;
    printf("centigrade =%f  and Fahrenheit= %f", centigrade ,Fahrenheit);
    return 0;
}


















