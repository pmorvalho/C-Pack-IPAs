
#include <stdio.h>
int main(){
    char current,oldchar;
    int innumber=0, hasseennot0=0;
    current=getchar();
    while (current!=EOF){
        if (current>='0' && current<='9')
            innumber=1;
        if (current>'0'&& current<='9')
            hasseennot0=1;
        if ((current==' ' || current=='\n')&& oldchar=='0'&& hasseennot0==0){
            putchar(oldchar);
        }
        if (current==' ' || current=='\n'){
            hasseennot0=0;
            innumber=0;
            putchar(current);
        }
        if (hasseennot0==1)
            putchar(current);
        oldchar=current;
        current=getchar();
    }
    return 0;
}