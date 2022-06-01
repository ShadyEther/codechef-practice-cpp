// no of digits using recursion
#include<stdio.h>

int calcDig(int n){
    if (n) return (1 + calcDig(n/10));
    else return 0;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Total number of digits in %d is %d", n, calcDig(n));
    return 0;
}