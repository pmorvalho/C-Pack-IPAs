

#include <stdio.h>

int main() {

    int n;
    int i;
    int nr_div = 2;

    scanf("%d",&n);

    for (i = 2; i < n; i++)
        
        if (n % i == 0)
            nr_div++;

    printf("%d\n",nr_div);
    
    return 0;
}