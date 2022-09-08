#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{   setlocale(LC_ALL,"portuguese");
    float temp, fr;
    printf("digite a temperatura em grau celsius: ");
    scanf("%f",&temp);
    fr=((temp*9)/5)+32;
    printf(" o valor da conversão em fahrenheit é ? = %.1f°",fr);

    return 0;
}
