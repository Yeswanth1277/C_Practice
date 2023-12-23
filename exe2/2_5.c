#include <stdio.h>
#include <math.h>

int main(){
    int sum;
    int n=0;
    printf("Enter the total amount: ");
    scanf("%d",&sum);
    while(sum>=100){
        n+=1;
        sum=sum-100;
    }
    while(sum>=50){
        n+=1;
        sum=sum-50;
    }
    while(sum>=10){
        n+=1;
        sum=sum-10;
    }
    while(sum>=5){
        n+=1;
        sum=sum-5;
    }
    while(sum>=2){
        n+=1;
        sum=sum-2;
    }
    while(sum>=1){
        n+=1;
        sum=sum-1;
    }
    printf("Total Number of Denominations are : %d",n);

    return 0;
}