

#include <stdio.h>
#define MAX 80

int lelinha (char s[]){    
    int c, i;              
    c=getchar();
    for (i=0; i < MAX-1 && c != '\n' && c != EOF; i++){
        s[i] = c;
        c = getchar();
    }
    s[i] = '\0';
    return i;
}

int main(){
    char s[MAX] = "" ;    
    lelinha(s);
    printf("%s\n", s);

    return 0;
}