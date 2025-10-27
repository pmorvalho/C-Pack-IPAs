
#include <stdio.h>
#include <stdlib.h>

#define NMAX 100



int main(){
    int c, acumulador = 0, i=0;

    while ('0' <= (c = getchar()) && c <= '9' && i<NMAX){
        
        acumulador += c - '0';
        i++;
    }
    
    if (acumulador % 9){
        printf("no\n");
    } else
        printf("yes\n");

    return 0;
}