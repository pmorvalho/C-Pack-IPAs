# include <stdio.h>

int main(){
    int n,soma=0;
    while((n=getchar())!=EOF){
        soma+=n-'0';
        if (soma!=0){
            putchar(n);
        }
        if (n==' ' || n=='\n'){
            soma=0;
        }
    }
    return 0;
}