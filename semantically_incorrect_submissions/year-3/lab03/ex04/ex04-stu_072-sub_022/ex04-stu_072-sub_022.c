

#include <stdio.h>

int main(){
    int c, num = 0;

    while ((c = getchar()) != EOF){
        if (c >= '0' && c <= '9'){
            num = num * 10 + (c - '0');
        }
        else{
            
            printf("%d%c", num, c);
            num = 0;
        }
    }

    if (num != 0){
        printf("%d", num);
    }
    return 0;
}
