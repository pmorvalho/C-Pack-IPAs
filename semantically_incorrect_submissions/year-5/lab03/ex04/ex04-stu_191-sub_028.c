
#include <stdio.h>

int main(){
    int c, numero=0, zeros=0;

    c = getchar();
    while (c!= EOF){

        if (c!='0'&&c!=' '){
            printf("%c", c);
            numero = 1;
            zeros = 0;

        } else if (c=='0') {
           if (numero==1){
            printf("%c",c);
           }
           zeros = 1;

        } else if (c==' '){
            if (zeros == 1){
                printf("0%c",c);
            } else {
                printf("%c",c);
            }
            zeros = 0;
            numero = 0;
        }
        c = getchar();
    }
    if (c=='0'){
        printf("%c",c);
    }
    return 0;
}