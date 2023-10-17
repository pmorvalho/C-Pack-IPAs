
#include <stdio.h>
#define SIZE 200 
#define DENTRO 1
#define FORA 0

int main(){
    int estado=FORA;
    char c, c1;

    while ((c= getchar())!= EOF){
        if (c ==' ' || c == '\n' || c  == '\t'){
            estado = FORA;
            putchar(c);
        }
        else if (c =='0'){
            c1 = getchar();
            if (estado == DENTRO || c1 ==' ' || c1 == '\n' || c1 == '\t' )
                printf("%c%c", c, c1);
            else if(c1!= '0')
                putchar(c1);
        }
        else {
            estado = DENTRO;
            putchar(c);
        }

 
    }

    return 0;

}