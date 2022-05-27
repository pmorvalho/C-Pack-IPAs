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


void apagaCaracter( char s[], char c){

    int i=0,j=0;

    while (s[i] != '\0'){
        if(s[i] == c){
            i++;
        }
        else{
            s[j] = s[i];
            i++;
            j++;
        }
    }

    s[j] = '\0';

    printf("%s\n",s);
    



}

int main(){

    char s[MAX];
    char c;

    leLinha(s);

    scanf("%c",&c);
    

    apagaCaracter(s,c);

    return 0;
}