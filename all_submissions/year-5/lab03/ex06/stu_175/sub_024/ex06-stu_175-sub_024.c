
#include <stdio.h>

int main(){
    char c, idx;
    int dig, soma = 0;
    for(idx=0;idx<100;idx++){
        c = getchar();
        if (c>='0'&&c<='9'){
            dig = c -'0';
            soma += dig;
        }
    }
    if (soma%9==0){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}