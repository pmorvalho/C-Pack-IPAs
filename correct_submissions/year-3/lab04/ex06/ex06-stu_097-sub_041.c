

#include <stdio.h>
#define MAX 80

int lelinha (char s[]){
    int c, i;
    c=getchar();
    for (i=0; i < MAX-1 && c != '\n' && c != EOF; i++){
        s[i] = c;
        c = getchar();
    }
    s[i] = '\0';
    return i;
}


void maiusculas (char s[]){
    int i ;
    for (i=0; s[i] != '\0'; i++){
            if(s[i] >= 'a' && s[i]<= 'z')
                s[i] = s[i] - 'a' + 'A';
    }
}


int main(){
    char s[MAX];
    lelinha(s);
    maiusculas(s);
    printf("%s\n", s);

    return 0;
}