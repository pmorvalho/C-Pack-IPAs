

#include <stdio.h>

int main(){

    int num;

    scanf("%d", &num);

    int i, j;
    
    for(int i = 1; i <= num; i++){
        for(int j = 0; j < num - 1; j++){
            printf("%d\t", j + i);
        }  
        printf("%d\n", j + i);
    }   

    return 0;
}