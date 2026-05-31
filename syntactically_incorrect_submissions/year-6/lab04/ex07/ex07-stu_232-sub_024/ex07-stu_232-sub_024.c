

#include <stdio.h>
#define MAX 80

int leLinha(char s[]){
    int counter = 0;
    char c;
    
    while ((c = getchar()) != '\n' && (c != EOF) && (c != '\0')){
        s[counter++] = c;
    }

    return counter;
}

void maiusculas(char s[]){
    int size = 0, dif = 'A' - 'a';
    
    for (int i = 0; (s[i] != '\0' && s[i] != '\n' && s[i] != EOF); i++){
        size++;
    }

    for (int j = 0; j < size; j++){
        if (s[j] >= 'a' && s[j] <= 'z'){
            s[j] += dif;
        }
    }
}

void apagaCaracter(char s[], char c){
    int size = 0;
    
    for (int i = 0; (s[i] != '\0' && s[i] != '\n' && s[i] != EOF); i++){
        size++;
    }

    int current_j = 0, num_char = 0, j = 0;
    for (j = 0; j < size; j++){
        if (s[j] != c){
            s[current_j] = s[j];
            current_j++;
        }
        else{
            num_char++;
        }
    }
    s[j - num_char] = '\0';
}

int main(){
    char s[MAX], c;
    leLinha(s);

    scanf("%c", &c);
    apagaCaracter(s, c);

    printf("%s\n", s);
    
    return 0;
}

