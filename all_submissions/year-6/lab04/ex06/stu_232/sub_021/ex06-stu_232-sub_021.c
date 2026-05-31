



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

int main(){
    char s[MAX];
    int count = leLinha(s);
    maiusculas(s);

    for (int i = 0; i < count; i++){
        printf("%c", s[i]);
    }
    printf("\n");
    
    return 0;
}