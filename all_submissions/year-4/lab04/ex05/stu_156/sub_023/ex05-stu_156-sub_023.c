
#include <stdio.h>
#include <string.h>
#define VECMAX 100

int leLinha(char vec[]);

int main(void){
    char vec[VECMAX];
    leLinha(vec);
    return 0;
}


int leLinha(char vec[]){ 
    int i;
   

    for(i=0;i<VECMAX;i++){
        if((vec[i] = getchar()) == EOF || vec[i] == '\n'){
            break;
        }
    }
    vec[i] = '\0'; 
    printf("%s",vec);
    return i;
}

