
#include <stdio.h>

int main(){
    int sum_digits = 0, c;

    while ((c = getchar()) != EOF){
        c = c - '0';
        sum_digits += c;
    }
    
    if (sum_digits % 9 == 0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }

    return 0;
}