
#include <stdio.h>
int construir_num(int a1, int a2){
    return (a1*10)+a2;
}

int main(){
    char c;
    int n = 0,res = 0;
    int last = 0;
    while((c = getchar()) != EOF && c != '\n'){
        if (c != ' '){
            n = construir_num(n, c - '0');
        }
        if (c == ' ' && last == '+'){
            res += n;
        } else if (c == ' ' && last == '-') {
            res -= n;
        }
        last = c;
    }
    printf("%d\n",res);
    return 0;
}