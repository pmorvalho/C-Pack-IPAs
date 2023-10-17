
#include <stdio.h>
int main (){
    int estado=0;
    int c= getchar();
    while(c!=EOF){
        if (estado==0 && c=='"'){
            estado=1;
        }
        else if (estado==1 && c=='"'){
            estado=0;
            printf("\n");
        }
        else if (estado==1){
            if (c==92) {
                c= getchar();
                if (c=='"' || c==92)
                    putchar(c);
            }
            else 
                putchar(c);
        }
        c=getchar();
    }
    return 0;
}