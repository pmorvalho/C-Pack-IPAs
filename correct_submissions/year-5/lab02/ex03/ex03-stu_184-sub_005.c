
#include <stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a,&b);
    
    printf("%s\n", ((a%b ==0)? "yes":"no"));
    return 0;
}