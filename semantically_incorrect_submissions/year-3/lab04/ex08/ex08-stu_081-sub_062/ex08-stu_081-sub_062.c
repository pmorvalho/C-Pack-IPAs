

#include <stdio.h>

int main(){
    long n1, n2;

    scanf("%ld %ld", &n1, &n2);

    if (n1>=n2)
        printf("%ld\n", n1);
    else if(n1<n2)
        printf("%ld\n", n2);
    
    return 0;
}