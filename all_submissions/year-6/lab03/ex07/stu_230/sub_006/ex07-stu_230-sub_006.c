
#include <stdio.h>
int main(){
    char c,op='+';
    int num=0,res=0;
    while ((c=getchar())!='\n'){
        if (c>='0'&&c<='9')
            num=num*10+(c-'0');
        if (c=='+') op='+';
        if (c=='-') op='-';
        if (c==' '){
            if (op=='+') res+=num;
            if (op=='-') res-=num;
        num=0;
        }
    }
    if (op=='+') res+=num;
    if (op=='-') res-=num;

    printf("%d\n",res);
    return 0;
}