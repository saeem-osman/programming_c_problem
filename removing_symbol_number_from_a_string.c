//removing punctuation space and number from a string

#include<stdio.h>
#include<string.h>
#define len 100

void outputString(char *a, int l);
void outputString(char *a, int l){
    int i, j=0;
    char b[l];

    for(i = 0; i <l ; i++){
        if(a[i] >= 65 && a[i]<=90 || a[i] >= 97 && a[i]<=122 ){
            b[j] = a[i];
            printf("%c",b[j]);
            j++;
        }
    }
}
int main(void){
    char text[len];
    printf("Input the data: ");
    gets(text);
    printf("After removing the Output string: ");
    outputString(text,strlen(text));
    return 0;
}
