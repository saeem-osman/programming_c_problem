//find power of a number using recursion

#include<stdio.h>

int recursivePow(int a, int b);

int recursivePow(int a, int b){
    if(b == 1) return a;
    else return a* recursivePow(a,b-1);
}

int main(void){

int i,j,n;
printf("Input the base value: ");
scanf("%d",&n);
printf("Input the value of power: ");
scanf("%d",&j);
i = recursivePow(n,j);
printf("The value of %d to the power %d is: %d",n,j,i);
return 0;

}
