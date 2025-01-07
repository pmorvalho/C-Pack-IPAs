
#include <stdio.h>
#define ZERO '0'
#define NINE 9


int main(void) {
    int c;
    int number = 0;

    while((c = getchar()) != '\0' && c != '\n'){
        if( c <= '9' && c >= '0'){ 
            number += (c - ZERO);
        }
    }
    
    if((number % NINE == 0) && (number >= NINE)){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    
    return 0;
}