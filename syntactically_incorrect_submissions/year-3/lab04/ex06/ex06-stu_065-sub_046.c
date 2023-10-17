
#include <stdio.h> 
#define MAX 100
void maiusculas(char s[]){
    int i, c;
    for (i = 0; i < MAX && (c=getchar())!='\n' && c != EOF; i++){
        if (97 <= c <= 122)
            s[i] = c + 22;
        else    
            s[i] = c;
    }
}

int main(){
    char s[MAX];
    maiusculas(s);
    printf("%s", s);
    return 0;
}