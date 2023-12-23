#include <stdio.h>

void calc(int *a, int *b) {
    int t;
    if (*a > *b) {
        t = *a;
        *a = *b;
        *b = t / 2;
    } else {
        t = *b;
        *b = *a;
        *a = t / 2;
    }
}

int main(){
    int l = 1189;
    int b = 841;
    printf("A%d: %d x %d \n", 0, l, b);
    for(int i=1;i<9;i++){
        calc(&l,&b);
        printf("A%d: %d x %d \n", i, l, b);
    }
    return 0;
    
}