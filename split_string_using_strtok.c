//split string using strtok

#include<stdio.h>
#include<string.h>
#define size 100

int main(void){
    char text[size];
    printf("Enter a string input: ");
    gets(text);
    char d[] = " ";
    char *p = strtok(text,d);
    printf("String of words after split by space are: ");
    while(p !=  NULL){
            printf("%s \n",p);
        p = strtok(NULL,d);
    }
    return 0;
}
