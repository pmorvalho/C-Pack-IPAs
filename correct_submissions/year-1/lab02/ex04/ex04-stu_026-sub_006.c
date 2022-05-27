#include <stdio.h>

int main(){
    int n, m, o;
    scanf("%d %d %d", &n, &m, &o);
    if (n > m){
        if(m > o){
            printf("%d %d %d\n", o, m, n);
        } else if(o > m){
            if(n > o){
                printf("%d %d %d\n", m, o, n);
            } else{
                printf("%d %d %d\n", m, n, o);
            }
        }
    }
    if (m > n){
        if(n > o){
            printf("%d %d %d\n", o, n, m);
        } else if(o > n){
            if(m > o){
                printf("%d %d %d\n", n, o, m);
            } else{
                printf("%d %d %d\n", n, m, o);
            }
        }
    }
    return 0;
}