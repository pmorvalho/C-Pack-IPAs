
#include <stdio.h>

int main(){
    int c;
    int count;
    int zero = '0';

    while((c=getchar()) != '\n'){
        count += (c - zero);
    }

    if(count  % 9 == 0){
        printf("yes\n");
    }
    else
        printf("no\n");

    return 0;
}