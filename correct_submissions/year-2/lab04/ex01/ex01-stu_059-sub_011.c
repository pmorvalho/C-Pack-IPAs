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
    int n, m, l,i,c;
    int v[VECMAX];

    
    scanf("%d",&n);
   
    for ( i = 0; i < n; i++)
        scanf("%d",&v[i]);
    
    m = max(v,n);


    for (l = 0; l < n ; l++){
        for ( c = 1; c <= m; c++)
            if (v[l] >= c)
                putchar('*');
        putchar('\n');
    }

    return 0;
}