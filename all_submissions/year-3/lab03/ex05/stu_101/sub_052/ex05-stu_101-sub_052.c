

#include <stdio.h>

int main(){
    int c,estado=0;
    while((c=getchar())!=EOF){
        if(estado==2 && c=='"'){
            estado=1;
        }
        if(estado==1 && c=='\\'){
            estado=2;
        }
        if(estado==1 && c=='"'){
            estado=0;
            putchar('\n');
            c = getchar();
        }
        if(estado==0 && c=='"'){
            estado=1;
        }
        if((c!='"') && (c!='\\') && estado==1){
            putchar(c);
        }
    }
    return 0;
}
    


