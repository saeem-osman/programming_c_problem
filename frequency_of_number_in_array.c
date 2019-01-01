//frequency of all element of an array

#include <stdio.h>
#define max 100

void findFrequency(int arr[], int s);

void findFrequency(int arr[], int s){
int counter = 0,j,i;
int arr2[max] = {0};
int arr3[max] = {0};

for(i = 0; i<s; i++){
    j = arr[i];
    arr2[j]++;
}
printf("The frequency of all elements of an array: \n");
for(i = 0; i<s; i++){
    j = arr[i];
    if(!arr3[j]){
    printf("%d occurs %d times \n", j,arr2[j]);
    arr3[j]++;
    }
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

    findFrequency(arr,n);
    return 0;

}


