

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

void maiusculas(char string[]){
    int i;
    char dif ='a'-'A';
    for(i=0;string[i]!='\0';i++){
        if(string[i]<='z' && string[i]>='a'){
            string[i] = string[i]-dif;
        }
    }
}
int main(){
    char string[MAX],c;
    int i=0;    
    while((c=getchar())!=EOF && c!='\n' && i<MAX-1){
        string[i]=c;
        i+=1;
    }
    string[i+1]='\0';

    maiusculas(string);
    lelinha(string);

    return 0;
}