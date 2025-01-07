
#include <stdio.h>


int main(){
    long soma;
    
    
    
    scanf("%ld", &soma);
    printf("%s\n", (soma % 9) == 0 ? "yes" : "no");

    return 0;
}