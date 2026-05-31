
#include <stdio.h>
#define NUM 0
#define OP 1

int main(){
    int c, estado=9, total=0, i=0;
    while ((c=getchar())!='\n'){
        if (c>='0' && c<='9'){
            estado = NUM;
        }
        if (estado == NUM){
            while(c>='0' && c<='9')
                i = i*10 + c - '0';
            if (c==' '){
                total+=i;
                i=0;
                estado = 
            }

        }
    }
}