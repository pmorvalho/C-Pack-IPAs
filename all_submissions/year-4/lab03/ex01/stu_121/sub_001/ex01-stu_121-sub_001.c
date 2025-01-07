
#include <stdio.h>
void quadrado(int n){
    int x,y;
    for (x=1;x<=n;x++)
        for (y=0;y<n;y++)
            printf("%d%c", (x+y), (y==n-1?'\n':'\t'));        
}
int main(){
    int n;
    scanf("%d",&n);
    quadrado(n);
    return 0;
}