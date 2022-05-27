






#include <stdio.h>
#define SOMA    0
#define SUB  1



int main() {
    
    int estado,c;
    int res,acc;
    
    acc=res=0;
    estado = SOMA;
    
    while ((c=getchar())!='\n') {
        if (c>='0' && c<='9') {
            acc= acc*10+(c-'0');
        }
        else if (c==' '){
            if (estado==SOMA){
                res+=acc;
                acc=0;
            }
                
            else if(estado==SUB){
                res-=acc;
                acc=0;
            }
        }
        else if(c=='+' && estado==SUB)
            estado=SOMA;
        else if (c=='-' && estado==SOMA)
            estado=SUB;
    }
    if (estado==SUB)
        res-=acc;
    else if (estado==SOMA)
        res+=acc;
    
    
    printf("%d\n",res);
    
    return 0;
}
