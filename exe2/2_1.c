#include <stdio.h>
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
    for(int i=0;i<d;i++){
        m=n%10;
        n=n/10;
        s += m;
    }
    printf("%d", s);
    return 0;
}