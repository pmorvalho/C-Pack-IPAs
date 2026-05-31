
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define DIM 100


int main(){

    char s1[DIM], s2[DIM];

    if (scanf("%99s %99s",s1, s2)!= 2) return 1;

    int i = 0;

    while(s1[i]!= '\0'){
        if(s1[i]> s2[i]){
            printf("%s\n", s1);
            break;
        }
        if(s2[i]> s1[i]){
            printf("%s\n", s2);
            break;
        }
        i++;
    }
return 0;
}
