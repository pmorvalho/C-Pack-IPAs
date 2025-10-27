
#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int state = OUT;
    char c, cnext;
    while((c=getchar())!=EOF){
        if (c!='0'){
            if (c=='\n' || c==' '){
                state = OUT;
            }
            else{
                state = IN;
            }
            printf("%c",c);
        }
        else{
            if (state==IN){
                printf("%c",c);
            }
            else {
                cnext = getchar();
                if ( cnext == ' '|| cnext == '\n' || cnext==EOF ){
                    printf("%c", c);
                }
                ungetc(cnext, stdin);
            }
        }
    }
    return 0;
}
