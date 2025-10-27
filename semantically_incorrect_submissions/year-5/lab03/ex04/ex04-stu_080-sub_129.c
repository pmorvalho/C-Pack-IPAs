
#include <stdio.h>

int main(){
    int c = getchar();
    int zeros = 0;
    while(c != EOF){
        switch (c){
            case ' ':
            case '\n':
                if(zeros){
                    zeros = 0;
                } else {
                    putchar('0');
                }
                putchar(c);
                break;
            case '0':
                if (zeros)
                    putchar(c);
                break;
            
            default:
                zeros = 1;
                putchar(c);
        }
        c = getchar();
    }
    return 0;
}