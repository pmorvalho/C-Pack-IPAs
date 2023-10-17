

#define SIM 0
#define NAO 1

#include <stdio.h>

int main(){
    int nove = NAO;
    long n, soma=0;

    scanf("%ld", &n);
    if (n == 9)
        nove = SIM;
    while (n!=0){
        n = n/10;
        soma += (n%10);
    }
    
    if (((soma !=0) && ((soma%9) == 0))||(nove == SIM))
        printf("yes\n");
    else
        printf("no\n");
    
    return 0;
}

