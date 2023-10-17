

#include <stdio.h>

#define MAX 80

void maiusculas(char s[]);

int main(){
    int i=0;
    char c, s[MAX];
    c=getchar();
    while((c!='\n') && (c!=EOF)){
        s[i] = c;
        c=getchar();
        i++;
    }
    s[i] = '\0';
    maiusculas(s);
    return 0;
}

void maiusculas(char s[]){
    int i;
    char nova[MAX];

    for(i=0; s[i]!='\0'; i++){
        if((s[i] >= 'a') && (s[i] <= 'z'))
            nova[i] = s[i] - ('a' - 'A');
        else
            nova[i] = s[i];
    }
    nova[i] = '\0';
    
    for(i=0; nova[i] != '\0'; i++)
        printf("%c", nova[i]);
    
    printf("\n");
}
