
#include <stdio.h>
int construir_num(int a1, int a2){
    return (a1*10)+a2;
}

int main(){
    char c;
    int a1=0,res = 0;
    int last = 0;
    c = getchar();
    while(c != EOF && c != '\n'){
        if (c == ' '){
            if (last == '+')
                res += construir_num(a1,c - '0');
            else if (last == '-')
                res -= construir_num(a1,c - '0');
        }
        last = c;
    }
    printf("%d\n",res);
    return 0;
}