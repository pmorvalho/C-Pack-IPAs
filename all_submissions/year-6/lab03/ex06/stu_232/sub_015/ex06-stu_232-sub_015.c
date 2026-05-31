

#include <stdio.h>



int main(){
    char c;
    int sum = 0;
    int num;

    scanf("%c", &c);
    while ((c >= '0') && (c <= '9')){
        num = c - '0';
        sum += num;
        scanf("%c", &c);
    }

    if (sum % 9 == 0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }

    return 0;
}