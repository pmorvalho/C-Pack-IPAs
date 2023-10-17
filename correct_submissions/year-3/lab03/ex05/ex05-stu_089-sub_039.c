

#include <stdio.h>

#define MAX 1000000

int main() {
    int c;
    int contador = 0;
    int i = 0;
    int inicio = 0;

    while ((c = getchar()) != EOF){

        if(c == '\\'){
            if(i == contador + 1 && inicio == 1)
                putchar(c);
            else
                contador = i;
        }
        
        else if(c == '"'){
            if(i == contador + 1)
                putchar(c);
            else if(inicio == 1){
                printf("\n");
                inicio = 0;
            }
            else
                inicio = 1;
        }
        else if(inicio == 1)
            putchar(c);

        i++;
    }


    return 0;
}
