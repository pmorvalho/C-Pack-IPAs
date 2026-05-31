

#include <stdio.h>

int main() {
    int n, i, nvdivs = 0;

    scanf("%d", &n);
    for(i = 1; i <=n; i++)
        if(n % i == 0) nvdivs++;
        printf("%d\n", nvdivs);
    return 0;
}