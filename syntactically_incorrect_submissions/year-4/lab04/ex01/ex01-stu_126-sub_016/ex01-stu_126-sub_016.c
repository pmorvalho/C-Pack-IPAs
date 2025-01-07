
#include <stdio.h>
#include <string.h>

int main(){
    int VECMAX = 100;
    int n;
    scanf("%d", &n);
    int vec[n];


    if (n< VECMAX){
        for (int i = 0; i<n; i++){
            scanf("%d", &vec[i]);
        }
        for (int i = 0; i<n; i++){
            for (int j=1; j <= vec[i]; j++){
                printf("*");
            }
        printf("\n");
        }
    }
return 0;
}