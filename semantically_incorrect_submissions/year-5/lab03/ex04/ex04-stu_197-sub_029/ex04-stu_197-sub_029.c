
#include <stdio.h>

int main(){
    int c,numero=0;
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
    }
    
    return 0;
    
}