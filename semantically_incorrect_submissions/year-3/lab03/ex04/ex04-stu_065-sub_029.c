
#include <stdio.h>

int main(){
    char c1, c2;
    while ((c1 = getchar()) != EOF){
        if (c1=='0'){
            if ((c2=getchar())!='\n' || (c2=getchar())!=' ' || (c2=getchar())!='\t')
                printf("%c", c2);
            else
                printf("%c%c", c1, c2);
        }
        else {
            printf("%c", c1);
        }
    }
    return 0;
}