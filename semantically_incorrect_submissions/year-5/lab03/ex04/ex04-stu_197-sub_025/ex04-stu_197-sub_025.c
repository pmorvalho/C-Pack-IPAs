
#include <stdio.h>

int main(){
    int c,numero=0,final_zero=1;
    while ((c = getchar())!= EOF)
    {   
        if(c!='0' || (c=='0' && numero==1)){
            if(c==' '){
                if(numero==0){
                    putchar('0');
                    putchar(c);
                }else{
                    putchar(c);
                }
                numero=0;
            }else{
                putchar(c);
                numero=1;
            }
        }else{
            numero=0;
        }
        if(c=='0' && numero==0){
            final_zero=1;
        }else if(c!='\n'){
            final_zero=0;
        }
    }
    if(final_zero==1){
        putchar(' ');
        putchar('0');
    }    
    return 0;
    
}