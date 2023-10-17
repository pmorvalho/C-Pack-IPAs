
#include <stdio.h>
 

int main() {
    int c, teste = 0;
    while((c = getchar()) == EOF){
        if(c == '0' && teste == 0){
            while((c = getchar()) == 0)
            ;
            if(c == ' ' || c == '\n')   
                printf("0%c" ,c);
            else if(c ==      EOF){
                printf("0\n");
                return 0;
            }
            else
                printf("%c", c);
            teste = 1;
        }
        else if(c == ' '  || c == '\n'){
            printf("%c", c);
            teste = 0;
        }
        else{
            printf("%c", c);
            teste = 1;
        }
    }
    printf("\n");
    return 0;
}