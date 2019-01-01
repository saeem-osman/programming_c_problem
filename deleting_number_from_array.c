//deleting number from an array

#include<stdio.h>
#define max 100

void newList(int arr[], int n, int pos);

void newList(int arr[], int n, int pos){
    int i, j = 0,flag = 0;
   for(i = 0; i<n; i++){
        arr[j] = arr[i];

    if(i==pos){
        while(i<n){
            arr[j] = arr[i+1];
            i++;
            j++;
            flag = 1;
        }
    }
        if(flag == 1) break;
        j++;


   }
    for(i =0; i<n-1; i++)
    printf("%d ", arr[i]);
}


int main(void){

int arr[max],i,n,pos;
printf("Enter the size of the array: ");
scanf("%d",&n);
for(i = 0; i<n; i++){
    printf("\nElement %d: ", i);
    scanf("%d",&arr[i]);
}
printf("Enter the position to delete: ");
scanf("%d",&pos);

newList(arr,n,pos-1);
return 0;

}
