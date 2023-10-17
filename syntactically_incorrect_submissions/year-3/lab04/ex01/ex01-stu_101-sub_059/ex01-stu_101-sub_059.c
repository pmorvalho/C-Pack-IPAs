


#include <stdio.h>

int main(){
    int i=0,n;
    int vecmax[100];

    for(i=0;i<n;i++){
        scanf("%d\n",&vecmax[i]);
    }
    vecmax[i]='\0';
    for(i=0;i<n;i++){
        for(j=0;j<vecmax[i];j++)
            printf('*');
    }
    return 0;
}
