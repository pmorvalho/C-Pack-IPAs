
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int c=0;
    for (int i=1;i*i<=n;i++){
        if (n%i == 0){
            c++;
            if (i!=n/i)c++;
        }
    }
    printf("%d\n", c);
    return 0;
}