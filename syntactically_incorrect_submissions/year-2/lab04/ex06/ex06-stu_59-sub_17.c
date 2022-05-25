#include<stdio.h>
#include<string.h>

#define MAX 80


int leLinha(char s[]){

    int i = 0,c;

    while ( ((c = getchar()) != EOF) && c != '\n'){
        s[i++] = c;
    }
    s[i]='\0';
    
    return i;
}

void maiuscula(char s[]){
    int len,i;

    len = leLinha(s);

    for (i = 0; i < len; i++)
        if (s[i] >= 'a' && s[i]<= 'z')
            s[i] = 'A' + (s[i] - 'a');

    printf("%s\n",s);


}

int main(){

    int len,i;
    char s[MAX];

    maiuscula(s);

    return 0;
}