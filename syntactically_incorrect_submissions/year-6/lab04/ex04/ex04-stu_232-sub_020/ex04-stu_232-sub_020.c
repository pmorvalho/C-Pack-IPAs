

#include <stdio.h>
#define MAX 80

int main(){
    char s[MAX];
    scanf("%s", s);
    int palindromo = 1, size = -1;
    
    for (int i = 0; s[i]!='\0'; i++){
        size += 1;
    }

    for (int j = 0; j<size; j++){
        if (s[j] != s[size-j]){
            palindromo = 0;
        }
    }

    if (palindromo == 1){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    
    return 0;
}