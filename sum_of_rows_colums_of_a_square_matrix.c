//sum of rows and columns of a square matrix

#include<stdio.h>
#define max 100

int main(void){
    int arr[max][max] = {0},sum[max]={0};
    int m,n,w=0,p=1;
    int i,j,k = 0,temp,temp2;
    printf("Enter the size of the square matrix: ");
    scanf("%d",&m);
    n = m;
    for(i = 0; i<m; i++){
        for(j = 0; j<n; j++){
                printf("Element - [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(i = 0; i<m; i++){
        for(j = 0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i<m; i++){
            temp = 0;
            temp2 = 0;
        for(j = 0; j<n; j++){
            temp += arr[j][i];
            temp2 += arr[i][j];
        }
        sum[k] = temp2;
        k++;
        sum[k] = temp;
        k++;

    }

    printf("The sum of rows and columns of matrix is: \n");
    for(i = 0; i<m; i++){
        for(j = 0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        if(w%2!=1)
        printf("%d ",sum[w]);
        w+=2;
        printf("\n");
    }

        while(p<k){
        if(p%2 == 1)
        printf("%d ",sum[p]);
        p=p+2;
        }
    return 0;
}
