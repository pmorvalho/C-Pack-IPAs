

#include <stdio.h>

int main(){

int N,i=1,divisores=0;

scanf("%d",&N);

while(i<=N){
     
    if(N%i==0){
        divisores++;
        i++;
    }
    else{
        i++;
    }
}
    printf("%d\n",divisores);
    return 0; 
}