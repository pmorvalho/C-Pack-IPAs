

#include <stdio.h>

int main(){
    int c,estado=0;
    while((c=getchar())!=EOF){
        if(estado==2 && c=='"'){
            estado=1;
            break;
        }
        if(c=='\\'){
            estado=2;
            break;
        }
        if(estado==0 && c=='"'){
            estado=1;
            break;
        }
        if(estado==1 && c=='"'){
            estado=0;
            putchar('\n');
            break;
        }
        if(c!='"' && c!='\\')
            printf("%c",c);
    }
    return 0;
}
    


