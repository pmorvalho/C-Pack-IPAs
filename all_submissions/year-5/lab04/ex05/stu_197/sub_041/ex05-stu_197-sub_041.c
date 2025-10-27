
#include <stdio.h>
#include <string.h>
#define MAX 80
int lelinha(char s[]){
    int i=0;
    while(s[i]!=EOF && s[i]!='\n'){
        printf("%c",s[i]);
        i+=1;
    }
    return i;
}

int main(){
    char string[MAX];
    if (fgets(string, MAX, stdin) != NULL) {
        lelinha(string);
    }
    return 0;
}