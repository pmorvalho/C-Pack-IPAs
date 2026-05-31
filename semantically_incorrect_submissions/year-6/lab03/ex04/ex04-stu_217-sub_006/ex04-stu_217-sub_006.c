
#include <stdio.h>

int main(){
    char c, res[500], prev;
    int i;
    prev = 'F';
    i = 0;
    while((c = getchar()) != EOF){
        if(c <= '1' && c <= '9'){
            res[i++] = c;
            prev = 'N';
        } else if(c == '0'){
            if(prev == 'N'){
                res[i++] = c;
            } else if(prev == 'F'){
                prev = 'Z';
            }
        } else if(c == ' ' || c == '\n'){
            if(prev == 'N'){
                prev = 'F';
            } else if(prev == 'Z'){
                res[i++] = '0';
                prev = 'F';
            }
        }
    }
    res[i] = '\0';
    printf("%s", res);
    return 0;
}