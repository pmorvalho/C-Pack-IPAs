
#include <stdio.h>
#define Dentro 1
#define Fora 0
 int main(){
    char c,z;
    int estado=Fora;

    while((c=getchar())!=EOF)
    {
        if (c==' '||c=='\n')
        {
            estado=Fora;
            putchar(c);
        }
        else if(c>='1' && c<='9'){
            estado=Dentro;
            putchar(c);
        }
        else if(estado==Dentro){
            putchar(c);
        }
        else if(estado==Fora){
            while (c=='0')
            {
                z=c;
                c=getchar();
            }
            if (c>='1' && c<='9')
            {
                estado=Dentro;
                putchar(c);
            }
            else{
                putchar(z);
                putchar(c);
            }
            
            
        }
        
    }
    return 0;
 }