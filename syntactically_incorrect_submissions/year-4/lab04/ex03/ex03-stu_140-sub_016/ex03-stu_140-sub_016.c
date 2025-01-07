
#include <stdio.h>
#define VECMAX 100
int main () {
    int vec[VECMAX],vec2[VECMAX], n,i,allmax=0,max=0;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&vec[i]);
        if (vec[i]>max)
            max=vec[i];
    }

    while(allmax!=n){
        allmax=0;
        for(i=0;i<n;i++){
            if (vec[i]<max){
                vec[i]++;
                printf(" ");
            }
            else{
                printf("*");
                allmax+=1;
            } 
        }   
        printf("\n");
    }
    return 0;
}
