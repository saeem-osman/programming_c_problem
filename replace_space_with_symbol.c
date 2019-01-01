//replace_space_with_symbol

#include<stdio.h>
#define size 100
int main(void){

char a[size];
int i,j,k;
printf("Input a string: ");
gets(a);
for(i = 0; i<=strlen(a); i++){
    if(a[i] == ' '){
        a[i] = '*';
    }
}
printf("After replacing the space with *, the new string is: ");
puts(a);

return 0;
}
