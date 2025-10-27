
#include <stdio.h>

int main(){
    char palavra[100];
    int i, j;
    scanf("%s", palavra);
    for (i = 0; palavra[i] != '\0'; i++);
    i--;
    for (i = 0; i < j; i++, j--){
        if (palavra[i] != palavra[j]){
            printf("no\n");
            break;
        }
    }
    if (palavra[i] == palavra[j]){
        printf("yes\n");
    }
    
    return 0;
}