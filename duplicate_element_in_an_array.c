//duplicate element in an array

#include <stdio.h>
#define max 100
int countDuplicate(int arr[], int s);
int countDuplicate(int arr[], int s){
int counter = 0,j,i;
int arr2[max] = {0};
for(i = 0; i<s; i++){
        j = arr[i];
    arr2[j]++;
}
for(i = 0; i<max; i++){
    if(arr2[i]>1)
        counter++;
}
return counter;
}
int main(void){

    int arr[max], i = 0,j,n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    while (i<n){
        printf("Element %d is: ", i);
        scanf("%d",&arr[i]);
    i++;
    }

    j = countDuplicate(arr,n);

    printf("Total number of duplicate elements found in the array is: %d",j);
    return 0;
}
