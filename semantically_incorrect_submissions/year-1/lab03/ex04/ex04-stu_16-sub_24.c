#include <stdio.h>

int main(){
    int c, fora = 0;
    while((c = getchar()) != EOF){
        if(c == ' ')
            fora = 1;
        if(!fora && c != '0'){
            printf("%c", c);
        }
    }
    return 0;
}
