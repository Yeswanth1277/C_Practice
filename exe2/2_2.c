#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    int d=0;
    int s=0;
    int m;
    int t = n;
    while(t>0){
        d++;
        t=t/10;
    }
    for(int i=d-1;i>=0;i--){
        m=n%10;
        n=n/10;
        s += m*pow(10,i);
    }
    printf("%d", s);
    return 0;
}