//checking the equality of two matrix

#include<stdio.h>
#define rows 100
#define cols 100

int main(void){

int a[rows][cols],b[rows][cols];
int i,j,k,r1,c1,r2,c2;
int flag = 1;
printf("Input rows and columns of the first matrix: ");
scanf("%d%d",&r1,&c1);
printf("Input elements for the first matrix \n");
for(i = 0; i<r1; i++){
    for(j = 0; j<c1; j++){
        printf("Element: [ %d ] [ %d ] ", i, j);
        scanf("%d",&a[i][j]);
    }
}
printf("Input rows and columns of the second matrix: ");
scanf("%d%d",&r2,&c2);
printf("Input elements for the second matrix \n");
for(i = 0; i<r2; i++){
    for(j = 0; j<c2; j++){
        printf("Element: [ %d ] [ %d ] ", i, j);
        scanf("%d",&b[i][j]);
    }
}
if(r1 != r2 || c1 != c2){
    printf("Two matrix are not equal.");
}
else{
    for(i = 0; i<r1; i++){
        for(j = 0; j<r1; j++){
            if(a[i][j] != b[i][j]){
                flag = 0; break;
            }
        }
    }
    if(flag == 1) printf("Two matrix are equal");
    else printf("Two matrix are not equal");
}

return 0;

}
