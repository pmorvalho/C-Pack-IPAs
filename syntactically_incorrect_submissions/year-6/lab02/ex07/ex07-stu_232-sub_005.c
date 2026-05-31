

#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    int num_divisores = 0;
    for (int i = 1; i<=a; i++){
        if (a%i==0){
            num_divisores += 1;
        }
    }
    printf("%d\n", num_divisores);
    return 0;
}