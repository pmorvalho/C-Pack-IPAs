
#include <stdio.h>
#define VECMAX 100
int main () {
    int vec[VECMAX],n,i,counter=0,allmax=0,max=0;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&vec[i]);
        if (vec[i]>max)
            max=vec[i];
    }

    while(allmax!=n || counter!=max){
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
        counter++;
        
    }
    return 0;
}
