
#include <stdio.h>

int main(){
    int c, slash=0, aspas=0;
    c = getchar();

    while (c!='\n'){

        if (slash==1){
            printf("%c",c);
            slash = 0;
        }

        else if (c=='"'){

            if (aspas==1){
                printf("\n");
                aspas = 0;
            } else {
                aspas = 1;
            }
    
        }
        
        else if (c=='\\') {
            slash=1;
        }

        else if (c==' '){
            if (aspas==1){
                printf("%c",c);
            }
        }
        
        else{
            printf("%c",c);
        }

        c = getchar();
    }

    return 0;
}