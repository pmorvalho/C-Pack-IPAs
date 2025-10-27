
#include <stdio.h>

#define VECMAX 100

int main(){
    int n, m =0,i,a,j;
    int arr[VECMAX];

    scanf("%d", &n);

    for (i =0; i<n; i++){
        scanf("%d", &a);
        arr[i]=a;
        if(a>m)m=a;
    }
    for (i=0 ; i<m; i++){

        for (j = 0;j< n;j++){
            if (m-arr[j]<=i)printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}