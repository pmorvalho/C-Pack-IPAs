
#include <stdio.h>
#include <string.h>
int leLinha(char s[]){
    char current;
    int counter=0;
    current=getchar();
    while(current!=EOF && current!='\n'){
        s[counter]=current;
        counter++;
        current=getchar();
    }
    s[counter]='\0';
    return counter;
}
void apagaCaracter(char s[], char c){
    
    int counter1=0,counter2=0;
    while (s[counter1]!='\0'){
        if (s[counter1]!=c){
            s[counter2]=s[counter1];
            counter2++;
        }
        counter1++;
}
    s[counter2]='\0';
}

int main(){
    char s[200],c;
    leLinha(s);
    scanf("%c",&c);
    apagaCaracter(s,c);
    printf("%s",s);
    printf("\n");
}