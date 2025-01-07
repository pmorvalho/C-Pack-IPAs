
#include<stdio.h>
#include<string.h>

void piramide(int n){ 
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n - i; j++){
            printf("  ");
        }
        for(int f = 1; f <= i; f++){
            printf("%d ", f);
        }
        for(int h = i - 1; h >= 1; h--){
            printf("%d ", h);
        }
        printf("\n");
    }
}


int main(){
    int num;
    scanf("%d", &num);
    if (num >= 2){
        piramide(num);
    }
    return 0;
}