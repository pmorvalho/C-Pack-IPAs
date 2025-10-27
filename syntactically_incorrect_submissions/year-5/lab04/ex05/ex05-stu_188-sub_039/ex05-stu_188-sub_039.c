
#include <stdio.h>

int leLinha(char s[]){
    int i; 
    char c;
    while (c=getcher()!= '\n' && c!=EOF){
        s[i]=c;
        i++;
    }
    s[i]='\0';
    return i;
}

int main(){
    char s[80];
    scanf("%s",s);
    printf("%d\n",leLinha(s));
    return 0;
}