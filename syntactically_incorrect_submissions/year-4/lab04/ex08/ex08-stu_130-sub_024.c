
#include <stdio.h>

#define MAX 100

enum state {UM, DOIS};

void lenumeros(char n1[], char n2[]){
    enum state estado = UM;
    int i = 0;
    char c;

    while((c = getchar()) != '\n'){
        if (c == ' ') {
            estado = DOIS;
            c = getchar();
            i = 0;
        }
        n1[i] = ((estado == UM) ? c : n1[i]);
        n2[i++] = ((estado == DOIS) ? c : n2[i]);
    }
    n1[i + 1] = '\0';
    n2[i + 1] = '\0';

}

char* compara(char n1[], char n2[]){
    for (int i = 0; i < MAX && n2[i] != '\0'; i++){
        if ((n1[i] - '0') > n2[i] - '0'){
            return n1;
        } else if ((n1[i] - '0') < n2[i] - '0'){
            return n2;
        }
    }
    return n1;
}

int main(){
    char n1[MAX], n2[MAX];


    lenumeros(n1, n2);
    printf("%s\n", compara(n1, n2));
    return 0;
}