//unique element in an array

#include <stdio.h>
#define max 100
void uniqueElement(int arr[], int s);
void uniqueElement(int arr[], int s){
int counter = 0,j,i;
int arr2[max] = {0};

for(i = 0; i<s; i++){
        j = arr[i];
    arr2[j]++;
}
printf("The unique element found in the array are: ");
for(i = 0; i<max; i++){
    if(arr2[i]==1)
        printf("%d ", i);

}
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
    uniqueElement(arr,n);
    return 0;

}

