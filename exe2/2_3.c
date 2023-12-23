#include <stdio.h>
#include <math.h>

int main(){
    float a;
    float b;
    float c;
    scanf("%f%f%f", &a, &b, &c);
    float s = (a+b+c)/2;
    float s1 = s*(s-a)*(s-b)*(s-c);
    float s2 = sqrt(s1);
    printf("%f", s2);
    return 0;
}

// #include <stdio.h>
// #include <math.h>

// int main() {
//     float a, b, c;
//     scanf("%f%f%f", &a, &b, &c);

//     // Calculate the semi-perimeter
//     float s = (a+b+c)/2;

//     // Calculate the area using Heron's formula
//     float s1 = s * (s - a) * (s - b) * (s - c);

//     // Check if the input values form a valid triangle
//     if (s1 < 0) {
//         printf("Invalid triangle: Negative area\n");
//     } else {
//         // Calculate the square root of the area
//         float area = sqrt(s1);
//         printf("Area of the triangle: %f\n", area);
//     }

//     return 0;
// }
