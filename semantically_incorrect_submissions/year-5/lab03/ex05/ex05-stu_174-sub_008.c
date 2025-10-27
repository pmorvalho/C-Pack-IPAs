
#include <stdio.h>

int main(){
    char c;
    int inword = 0;
    int slash = 0;
    while((c = getchar()) != '\n'){
        switch(c){
            case ' ':
                if(inword) {
                    putchar(' ');
                } else {
                    putchar('\n');
                }
                break;
            case '"':
                if(slash){
                    inword = 1;
                    slash = 0;
                    putchar(c);
                    break;
                }
                if(inword) {
                    inword = 0;
                    break;
                }
                inword = 1;
                break;
            case '\\':
                if(slash) {
                    slash = 0;
                    putchar(c);
                    break;
                }
                slash = 1;
                break;
            default:
                inword = 1;
                putchar(c);
        }
    }
    printf("\n");
    return 0;
}