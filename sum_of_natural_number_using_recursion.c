//sum of a natural number series using recursion

#include<stdio.h>

int recursiveSum(int n);
int recursiveSum(int n){

    if(n == 1)
        return 1;
    else return n+recursiveSum(n-1);

}

int main(void){
    int i,j;
    printf("Input the last number starting from the range 1: ");
    scanf("%d",&i);
    j = recursiveSum(i);
    printf("The sum of the numbers from 1 to %d is: %d",i,j);
    return 0;

}
