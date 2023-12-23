#include <stdio.h>
#include <math.h>

int main(){
    float t,v,wcf;
    printf("Enter the temperature of the air: ");
    scanf("%f",&t);
    printf("Enter the velocity of the wind: ");
    scanf("%f",&v);
    wcf= 35.74 + (0.6215*t) + ( (0.4275*t) - 35.75 ) * pow(v,0.16);
    printf("Wind chill factor is: %0.3f",wcf);  
    return 0;
}