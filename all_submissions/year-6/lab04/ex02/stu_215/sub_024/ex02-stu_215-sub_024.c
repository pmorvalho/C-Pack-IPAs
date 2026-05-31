

#include<stdio.h>
#include<string.h>

#define VECMAX 100

int main(){
    int n, v[VECMAX],i,j, maior=0;
    scanf("%d", &n);
    for (i=0;i<VECMAX;i++){
        scanf("%d", &v[i]); 
        if (v[i] > maior)   
            maior = v[i];
    }
    for (i = 1; i <= maior; i++){    
        for (j=0; j<n; j++){         
            if (v[j]>=i)    
                putchar('*');
            else
            putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}