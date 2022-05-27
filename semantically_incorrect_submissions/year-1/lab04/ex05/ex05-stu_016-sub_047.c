#include <stdio.h>

#define MAX 80

int leLinha(char s[]) {
    int i = 0, length = 0, c;

    c = getchar();
    while(i < MAX && c != '\n' && c != EOF){
        s[i] = c;
        printf("%c", c);
        c = getchar();
        length++;
    }
    return length;
}

int main(){
    char vector[MAX];
    leLinha(vector);
    return 0;
}
