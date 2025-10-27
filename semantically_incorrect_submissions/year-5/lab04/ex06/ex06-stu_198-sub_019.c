
#include <stdio.h>
#define MAX 80

int main(){
    int i;
    char s[MAX];
    fgets(s, MAX, stdin);
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }
    printf("%s\n", s);
    return 0;
}