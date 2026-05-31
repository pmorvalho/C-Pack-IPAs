
#include <stdio.h>
#define MAX 100
int max(int vec[], int n);

int main(){
    int i,j,n,maior;
    int vec[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&vec[i]);
    maior=max(vec,n);
    for(i=1;i<=maior;i++)
        for(j=0;j<n;j++) putchar(vec[j]>=i?'*':' ');
        putchar("\n");
    return 0;
}

int max(int vec[],int n){
    int i,mx=vec[0];
    for(i=1;i<n;i++)
        if(mx<vec[i])
            mx=vec[i];
    return mx;
}
