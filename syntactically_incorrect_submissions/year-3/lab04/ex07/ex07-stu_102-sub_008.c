
#include <stdio.h>
    void apagaCaracter(char s[], char c){
        int i=0,j,pal;
        while ((pal = getchar())!= EOF && pal != '\n'){
            s[i] = pal;
            i++;
        }
        s[i] = '\0';
        c = getchar();
        for(j=0;j<i;j++){
            if (s[j] != c)
                printf("%c",s[j]);
        }
    }
    int main(){
        char s[100],c;
        apagaCaracter(s,c);
        return 0;
    }