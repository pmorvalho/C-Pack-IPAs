
#include <stdio.h>
#include <string.h>
int leLinha(char s[]){
    char current;
    int counter=0;
    current=getchar();
    while(current!='\0'){
        counter++;
        current=getchar();
    }
    return counter;
}

int main(){
    char str[200],current;
    int counter=0;
    current=getchar();
    while(current!=EOF && current!='\n'){
        str[counter]=current;
        counter++;
        current=getchar();
    }
    str[counter]='\0';
    printf(str);
    printf("\n");
    return 0;  
}