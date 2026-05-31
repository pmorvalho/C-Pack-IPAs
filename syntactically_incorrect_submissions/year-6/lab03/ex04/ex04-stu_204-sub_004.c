

#include <stdio.h>

int main(){

    int Estado = 'F';

    for(int  c = getchar(); c != EOF; c = getchar()){

        if (Estado == 'Z'){
            if (c =='0') continue;

            else if ( (c == ' ') || (c == '\n') ) {
                putchar('0');
                putchar(' ');
                Estado = 'F';
                }
            else{
                putchar(c);
                Estado = 'N';
                continue;
                }    
            }    
        else if(Estado == 'F'){
            if (c =='0'){
                Estado = 'Z';
                continue;
            }
            if ((c>'0')&&(c<='9')){
                putchar(c);
                Estado = 'N';
                continue;
            }
            if ( (c == ' ') || (c == '\n') ) continue;
        }

        else{
            if ( (c == ' ') || (c == '\n') ) {
                putchar(' ');
                Estado = 'F';
                continue;
            }
            if ((c>='0')&&(c<='9')){
                putchar(c);
                continue;
            }
        }
       }
    if (Estado == 'Z') putchar('0');
    putchar('\n');
    return 0;
}
