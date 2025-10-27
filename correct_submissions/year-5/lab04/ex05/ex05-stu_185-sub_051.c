
#include <stdio.h>
#define MAX 80

int leLinha(char s[]){
    char c;
    int i = 0;
    while ((c = getchar()) != '\n' && c != EOF ){
        if (i < MAX - 1) { 
            s[i] = c;
            i++;
        }
    }
    s[i] = '\0';
    return i;
}
int main(){
    char s[MAX];
    leLinha(s);
    printf("%s\n", s);
    return 0;
}