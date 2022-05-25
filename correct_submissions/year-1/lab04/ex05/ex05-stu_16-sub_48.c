#include <stdio.h>

#define MAX 80

int leLinha(char s[]) {
    int i = 0, length = 0, c;

    while(i < MAX && (c = getchar()) != '\n' && c != EOF){
        s[i] = c;
        length++;
        i++;
    }
    s[i] = '\0';
    printf("%s\n", s);
    return length;
}

int main(){
    char vector[MAX];
    leLinha(vector);
    return 0;
}
