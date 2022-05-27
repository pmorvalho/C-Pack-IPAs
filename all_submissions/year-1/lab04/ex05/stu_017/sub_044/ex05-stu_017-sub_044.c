#include <stdio.h>
#include <string.h>

#define MAX 80

int leLinha(char s[]){
    char c;
    int num_char = 0;

    scanf("%c", &c);
    while ((c != '\n') && (c != EOF)){
        s[num_char] = c;
        num_char++;

        scanf("%c", &c);
        if (num_char >= 80) {
            break;
        }
    }

    s[num_char] = '\0';

    return num_char;
}

int main(){
    char s[MAX];
    int num_char, contador;

    num_char = leLinha(s);
    
    for (contador = 0; contador < num_char; contador++) {
        printf("%c", s[contador]);
    }

    return 0;
}