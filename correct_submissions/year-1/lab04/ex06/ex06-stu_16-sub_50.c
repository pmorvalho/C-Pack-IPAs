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

void maiusculas(char s[]) {
    int i;
    leLinha(s);
    
    for(i = 0; i < MAX && s[i] != '\0'; i++){
        if(s[i] >= 'a') s[i] = s[i] + ('A' - 'a');
    }

    printf("%s\n", s);

}

int main(){
    char vector[MAX];
    maiusculas(vector);
    return 0;
}
