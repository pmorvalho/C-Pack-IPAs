
#include <stdio.h>

#define MAX 80


int main(){
    char s[MAX];
    int c, size = 0;

    while ((c = getchar()) != EOF && size < MAX - 1){
        s[size++] = c;
    }
    s[size] = '\0';
  
    for (int i = 0, j = size - 1; i <= j; i++, j--){
        if (s[i] != s[j]){
            printf("no\n");
            return 0;
        }
    }

    printf("yes\n");
    return 0;
}