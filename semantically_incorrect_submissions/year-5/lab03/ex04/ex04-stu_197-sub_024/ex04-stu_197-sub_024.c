
#include <stdio.h>

int main(){
    int c,numero=0;
    while ((c = getchar())!= EOF)
    {
        if(c ==' '){
            putchar(c);
            numero=0;
        }else if(c=='0' && numero==0){
            continue;
        }else{
            putchar(c);
            numero=1;
        }
    }

    if(numero==0){
        putchar('0');
    }
    printf("\n");
    return 0;
    
}