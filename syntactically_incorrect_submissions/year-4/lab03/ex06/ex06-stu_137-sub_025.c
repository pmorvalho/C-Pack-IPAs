
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    int sum = 0;
    char num[101];

    scanf("%100s", num);

    for(int i = 0; num[i] != '\0'; i++){
        sum += num[i] - '0';
    }

    if(sum % 9 == 0){
        printf("yes\n");
    }
    else{printf("no\n");}
    
    return 0;
}