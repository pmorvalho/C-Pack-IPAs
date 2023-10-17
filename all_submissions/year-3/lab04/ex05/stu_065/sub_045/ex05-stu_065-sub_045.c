
#include <stdio.h>
#define MAX 100

int lelinha(char s[]){
    int i, c;
    for (i=0; i<MAX && (c=getchar())!='\n' && c != EOF; i++){
        s[i] = c;
    }
    s[i]='\0';
    return i;
} 


int main(){
    char s[MAX];
    lelinha(s);
    printf("%s\n", s);
    return 0;
}