
#include <stdio.h>

int main(){

    long int great, num;

    scanf("%ld", &great);

    for(int i = 0; i < 2; i++){
        scanf("%ld", &num);
        if(num > great){
            great = num;
        }
    }

    printf("%ld\n", great);
}