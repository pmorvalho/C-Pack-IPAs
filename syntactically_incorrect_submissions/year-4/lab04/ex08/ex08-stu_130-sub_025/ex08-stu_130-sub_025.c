
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
            i = 0;
            continue;
        }
        if (estado == DOIS){
            n2[i++] = c;
        } else n1[i++] = c;
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