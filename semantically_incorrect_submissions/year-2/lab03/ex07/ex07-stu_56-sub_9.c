#include <stdio.h>

int main(){
    int n,n1=0,resultado=0,dig;
    n=getchar();
    while(n!=' '){
        dig=n-'0';
        resultado=resultado*10+dig;
        n=getchar();
    }
    while((n=getchar())!=EOF){
        if (n=='+'){
            n=getchar();
            n=getchar();
            while((n)!=' ' && (n)!=EOF){
                dig=n-'0';
                n1=n1*10+dig;
                n=getchar();
            }
            resultado=resultado+n1;
            n1=0;
            
        }
        else if (n=='-'){
            n=getchar();
            n=getchar();
            while((n)!=' ' && (n)!=EOF){
                dig=n-'0';
                n1=n1*10+dig;
                n=getchar();
            }
            resultado=resultado-n1;
            n1=0; 
        }
    }
    printf("%d",resultado);
    return 0;
}