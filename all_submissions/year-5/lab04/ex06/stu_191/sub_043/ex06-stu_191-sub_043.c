
#include <stdio.h>
#define DIM 100

void maiusculas(char s[]){
    int i = 0;
    while (s[i]!='\0'){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]-= 'a'-'A';

        }
        ++i;
    }
    s[i]='\0';

    printf("%s\n",s);
}

int main(){
    char s[DIM];
    int i =0, c;

    c=getchar();
    while (c!= EOF && c!='\n' &&i<DIM-1){
        s[i++]=c;
        c=getchar();
    }
    s[i]='\0';

    maiusculas(s);

    
    return 0;
}