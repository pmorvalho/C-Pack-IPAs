
#include <stdio.h>
#include <string.h>
#define MAX 80
int lelinha(char s[]){
    int i=0;
    while(s[i]!='\0'){
        printf("%c",s[i]);
        i+=1;
    }
    printf("\n");
    return i;
}


int main(){
    char string[MAX],c;
    int i=0;    
    while((c=getchar())!=EOF && c!='\n' && i<MAX-1){
        string[i]=c;
        i+=1;
    }
    string[i+1]='\0';

    lelinha(string);

    return 0;
}