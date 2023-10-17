

#include <stdio.h>

int main(){
    long n, soma=0;

    scanf("%ld", &n);
    
    while (n!=0){
        n = n/10;
        soma += (n%10);
    }

    if ((soma !=0) && (soma%9) == 0)
      printf("yes\n");
    else
        printf("no\n");
    
    return 0;
}

