




#include <stdio.h>
#include <string.h>

#define MAX 80

int isPal(char str[]){
    int i, j;

    for(i = 0,j = strlen(str) - 1; i< j; i++,j--){
        if(str[i] != str[j])
            return 0;
    }
    return 1;
}

int main() {
    char str[MAX];
    
    scanf("%s", str);
    printf("%s", isPal(str) ? "yes" : "no");
    
    return 0;
}