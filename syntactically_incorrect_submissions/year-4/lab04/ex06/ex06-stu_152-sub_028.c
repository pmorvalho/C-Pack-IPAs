
#include <stdio.h>
#include <string.h>

#define MAX 80

void maiusculas(char s[]);
int leLinha(char s[]);

int main(){
    char s[MAX];
    int size;

    size = leLinha(s);
    s[size] = '\0';
    maiusculas(s);


    printf("%s\n",s);

    return 0;
}


void maiusculas(char s[]){
    int conv;
    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] >= 'a' && s[i] <= 'z'){
            conv = s[i];
            s[i] = (char)conv - 32;
        }
    }   
}

int leLinha(char s[]){
    int count = 0;
    char c;

    for (count = 0; (c = getchar()) != '\n' && c != EOF; count++){
        s[count] = c;
    }
    
    return count;
}