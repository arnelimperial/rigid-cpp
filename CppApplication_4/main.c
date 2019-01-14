/*
*Author: Arnel Imperial
*Convert Markka to Euro and rounding floating point to nearest hundredths
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float convertFIM(float num1){
//    int num2, num3, num4;
//    float entry, entry1;
//    num2 = num1*100;
//    num3 = num2%10;
//    num4 = num2/10;
//    if(num3>= 5)
//        num4++;
//
//     entry = (float)(num4)/10;
//     //printf("\nFIM converted to euro: %.2f", entry1);
//     return entry;

    float temp = num1;
    float a = 0.16819; //conversion factor from markka to euro
    temp = ceil(temp*100 + 0.5)/100; //0.5 for rounding off
    float result = temp*a;

    return result;
}

int main(void)
{
    float f_Markka;
    float converted;
    printf("Enter an amount in FIM: ");
    scanf("%f", &f_Markka);

    //float result = convertFIM(converted);
    float EURO = convertFIM(f_Markka);
    printf("FIM converted to euro:%.2f\n", EURO);
    return 0;
}