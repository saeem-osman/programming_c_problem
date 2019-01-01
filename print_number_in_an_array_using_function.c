//print number in an array using function

#include<stdio.h>
#define size 100
int i = 0;
void printArray(int arr[], int n);
void printArray(int arr[], int n){
if(i == n) return;
else{
    printf("%d ",arr[i]);
    i++;
}
return printArray(arr,n);
}

int main(void){
    int arr[size],i,n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d",&n);
    printf("Input %d element in the array: \n",n);
    for(i = 0; i<n; i++){
        printf("element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The elements in the array are: ");
    printArray(arr,n);

    return 0;
}
