
#include <stdio.h>
#include <string.h>

#define VECMAX 100

int main(void) {
    long unsigned int i;
    char vec[VECMAX];

    scanf("%99s", vec);
    for(i = 0; i < strlen(vec)/2;i++){
        if(vec[i] != vec[strlen(vec)-i-1]){ 
            puts("no");
            return 0;
        }
    }
    puts("yes");


    return 0;
}

