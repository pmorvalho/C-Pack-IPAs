

#include <stdio.h>

int main(){

    int Mens, Barra;

    Mens = 'N';
    Barra ='N';

    for(int c = getchar();c !=EOF; c = getchar()){

        if ((Mens == 'N')&&(c != '"'))  continue;

        else if ((Mens == 'N')&&(c == '"')) {
            Mens = 'S';
            continue;
        }
        else{
            if (Barra == 'S'){
                putchar(c);
                Barra = 'N';
                continue;
            }
            else{
                if (c == '"'){
                    putchar('\n');
                    Mens = 'N';
                    continue;
                }
                else if (c =='\\'){
                    Barra ='S';
                    continue;
                }
                else{
                    putchar(c);
                    continue;
                }
            }
        }
    }
    
}
