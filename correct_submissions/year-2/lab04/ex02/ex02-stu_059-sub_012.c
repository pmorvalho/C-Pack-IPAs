#include<stdio.h>

#define VECMAX 100

int max( int v[], int n){
    int i, m = 0;

    for ( i = 0; i < n; i++)
        if (v[i] > m)
            m = v[i];
    
    return m;   
}

int main(){
    int i,n,l,c,m;
    int v[VECMAX];

    scanf("%d",&n);

    for (i = 0; i < n; i++)
        scanf("%d",&v[i]);
    
    m = max(v,n);

    for ( l = 1; l <= m; l++){
        for ( c = 0; c < n; c++){
            if(v[c]>=l)
                putchar('*');
            else
                putchar(' ');
        }
        printf("\n");
    }
    
    


    return 0;
}