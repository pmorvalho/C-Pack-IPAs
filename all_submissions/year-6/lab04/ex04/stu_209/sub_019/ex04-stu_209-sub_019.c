

#include <stdio.h>

#define MAX 80

int eh_palindromo( char s[]){
    
    int i,len=0;

    while (s[len]!='\0'){
        len++;
    }

    for(i=0;i<len;i++){
        if (s[i]!=s[len-i-1]) {return 0;}
    }
    return 1;

}



int main(){
    
    char s[MAX];
    
    scanf("%s",s);

    if (eh_palindromo(s)) {printf("yes\n");}
    else {printf("no\n");}
    
    return 0;
    }