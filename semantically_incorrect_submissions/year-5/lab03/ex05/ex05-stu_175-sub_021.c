
#include <stdio.h>

int main (){
    char c, cnext;

    while((c=getchar())!=EOF){
        if (c=='\\'){
            cnext = getchar();
            printf("%c", cnext);
        }
        else if ( c=='"'){
            cnext = getchar();
            if (cnext == ' '){
                printf("\n");
            }
            if (cnext!=' '){
                ungetc(cnext, stdin);
            }
        }
        else {
            printf("%c",c);
        }
    }
    return 0;
}