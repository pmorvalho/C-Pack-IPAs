
#include <stdio.h>

int main(){
    int c;
    while ((c = getchar()) != EOF){
        if (c == '"'){
            while((c = getchar()) != '"')
                putchar(c);
            putchar('\n');
        }
    }
    return 0;
}

