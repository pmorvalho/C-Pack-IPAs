
#include <stdio.h>
#define VECMAX 100
int max(int a[VECMAX],int n){
    int i,m = 0;
    for(i=0; i < n; i++)
        if (a[i] > m)
            m = a[i];
    return m;
}
int main(){
    int vec[VECMAX],i,j,n,m = 0;
    scanf("%d",&n);
    for(i=0 ;i<n ;i++)
        scanf("%d",&vec[i]);
    m = max(vec,n);
    for(i=0;i < m;i++){
        for(j = 0;j < n;j++)
            putchar(vec[j] > i?'*':' ');
        putchar('\n');
    }
    return 0;}