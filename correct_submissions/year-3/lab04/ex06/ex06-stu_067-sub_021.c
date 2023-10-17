
#include<stdio.h>
#define MAX 80



int leLinha(char s[MAX]){
    int i, c;
    
    for(i=0; i<MAX-1 && (c=getchar())!= EOF && c != '\n'; i++)
        s[i] = c;
    s[i] = '\0';

    return i;
}

void maiusculas(char s[MAX]){
    int i;

    for(i=0; s[i] != '\0'; i++){
        if(s[i]>='a' && s[i]<='z')
            s[i] -= ('a'-'A');
    }
    puts(s);
}


int main(){
    char s[MAX];
    
    leLinha(s);
    maiusculas(s);

    return 0;
}