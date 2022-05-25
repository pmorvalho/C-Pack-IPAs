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
    return length;
}

void apagaCaracter(char s[], char c) {
    int i = 0, j = 0;
    char vector[MAX];
    while(i < MAX - 1 && s[i] != '\0') {
        if(s[i] != c) {
            vector[j] = s[i];
            j++;
        }
        i++;
    }
    vector[i] = '\0';
    printf("%s\n", vector);
}

int main(){
    char vector[MAX], c;
    leLinha(vector);
    c = getchar();
    apagaCaracter(vector, c);
    return 0;
}
