
#include <stdio.h>

int main(){
    int res=0,num;
    char c,operador='+';
    while((c=getchar())!='\n'){
        if(c>='0'&&c<='9'){
            num = c-'0';
            while((c=getchar())>='0'&& c<='9'){
                num = num*10 + (c-'0');
            }
            if(operador=='+'){
                res+=num;
            }
            else if(operador=='-'){
                res-=num;
            }
        }
        else if(c=='+' || c=='-'){
            operador=c;
        }
    }
    printf("%d\n",res);
    return 0;
}