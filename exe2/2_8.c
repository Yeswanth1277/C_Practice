#include <stdio.h>
#include <math.h>

int main(){
    float angle;
    printf("Enter the angle: ");
    scanf("%f",&angle);
    printf("Sin(%0.2f): %0.2f\n",angle,sin(angle));
    printf("Cos(%0.2f): %0.2f\n",angle,cos(angle));
    printf("Tan(%0.2f): %0.2f\n",angle,tan(angle));
    return 0;
}