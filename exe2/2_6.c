#include <stdio.h>
#include <math.h>

int main(){
    float l1,l2,g1,g2;
    printf("Enter the latitudes of two places on earth: ");
    scanf("%f",&l1);
    scanf("%f",&l2);
    printf("Enter the longitudes of two places on earth: ");
    scanf("%f",&g1);
    scanf("%f",&g2);
    float dist= 3969*acos((sin(l1)*sin(l2))*(cos(l1)*cos(l2))+(cos(g2-g2)));
    printf("Diatance between these two places is: %0.3f",dist);  
    return 0;
}