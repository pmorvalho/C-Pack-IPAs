
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

int main(){
    
}