
#include <stdio.h>
#include <string.h>
#define MAX 80
#define TRUE 1
#define FASLE 0

int main(){
    size_t i, j;
    int value;
    char palavra[MAX];

    
    scanf("%s", palavra);
    value = TRUE;
    if (strlen(palavra) % 2 != 0){
        for(i = 0; i < strlen(palavra); i++){
            if (i == ((strlen(palavra) / 2) + 1))
                continue;
            else{
                if(palavra[i] != palavra[(strlen(palavra)-1) - i]){
                    printf("no\n");
                    value = FASLE;
                    break;
                }
                value = TRUE;
            }  
        }
    }
    else{
        for(j = 0; j < strlen(palavra); j++){
            if(palavra[j] != palavra[(strlen(palavra) - 1) - j]){
                printf("no\n");
                value = FASLE;
                break;
            };
            value = TRUE;
        }
    }
    if (value == TRUE)
        printf("yes\n");
    return 0;
}