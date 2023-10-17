
#include <stdio.h>

#define MAX 80

int palindromo(char v[]){
    int i,j;
    for (i = 0,j = strlen(v) -1; i < j; i++, j--){
        if(v[i] == v[j]){
            return 1;
        }
    }
    return 0;
}

int main(){
    char vec[MAX];
    scanf("%s", vec);
    if(palindromo(vec))
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}