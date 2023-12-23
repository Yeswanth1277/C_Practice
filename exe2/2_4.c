#include <stdio.h>
#include <math.h>

int main(){
    float x,y;
    printf("Enter the (X,Y)co-ordinates :\n");
    scanf("%f",&x);
    scanf("%f",&y);
    float r=pow(((x*x)+(y*y)),0.5);
    float t=atan(y/x);
    printf("Polar Co-ordinates of the given Cartesian Co-ordinates (%0.2f,%0.2f) is: (%0.2f,%0.2f)",x,y,r,t);
    return 0;
}