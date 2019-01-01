//find the largest and smallest word in a string

#include <stdio.h>
#include <string.h>
#define size 100

int main()
{
	char str[100];
	int i,j,let = 0,long_let = 0, long_pos = 0, min_let = size, min_pos = 0;
	printf("Enter a string: ");
	gets(str);
	for(i = 0; str[i] != '\0'; i++){
        for(let = 0; str[i] != ' ' && str[i] != '\0';i++){
        let++;
	}
	if(let > long_let){
        long_let = let;
        long_pos = i - let;
        }
     if(min_let>let){
        min_let = let;
        min_pos = i - let;
     }

    }

    printf("The largest word is \"%.*s\" and the smallest word is  \"%.*s\" in the string: %s ",
           long_let,long_pos+str,min_let,min_pos+str,str);



}
