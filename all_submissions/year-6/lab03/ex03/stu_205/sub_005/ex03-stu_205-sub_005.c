
#include <stdio.h>

int main(){
    int n, i, l=1, r;
    scanf("%d", &n);
    r=n;
    while (l<=n){
        for (i=1; i<n; i++) printf("%c ", i==l||i==r?'*':'-');
    printf("%c\n", i==l||i==r?'*':'-');
    l++;
    r--;
}
    return 0;
}
