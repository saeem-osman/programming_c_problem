//separate even odd number in array

#include <stdio.h>
#define max 100

int printElement(int arr[], int s);

int printElement(int arr[], int s){
int a[max], b[max];
int i,j=0,k=0;

for(i = 0; i<s; i++){
    if(arr[i] % 2 == 0){
        a[j] = arr[i];
        j++;
    }
    else{
        b[k] = arr[i];
        k++;
    }
}
printf("The even elements are: ");
for( i =0; i<j; i++){
    printf("%d ",a[i]);
}
printf("\nThe odd elements are: ");
for(i = 0; i<k; i++)
    printf("%d ",b[i]);


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



    printElement(arr,n);
    return 0;

}

