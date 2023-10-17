
#include <stdio.h>
#include <string.h>

#define VECMAX 100

int palindromo(char v[]){
    int i, j;
    for (i = 0, j = strlen(v)-1 ; i > j; i++, j--)
        if(v[i] != v[j])
            return 0;
    return 1;
}




int main(){
    char s[VECMAX];
    scanf("%s", s);
    if (palindromo(s))
        printf("yes\n");
    else
        printf("no\n");
    return 0
}