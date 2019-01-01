//find the frequency of a word

#include<stdio.h>
#define size 100

int main(void){
    char a[size];
    printf("Input the string: ");
    gets(a);
    int i,j=0,counter = 0;
    char b[] = "the";
    char c[] = "The";
    for(i = 0; a[i] != '\0'; i++){
    if(a[i] == b[j] || a[i] == 'T'){
            j++;
        if(j == 2){
            counter++;
            j = 0;
        }
    }
    else {
            j = 0;
    }
}

    printf("The frequency of the word 'the' is: %d",counter);
    return 0;
}
