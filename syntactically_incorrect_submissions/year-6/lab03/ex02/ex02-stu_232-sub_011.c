

#include <stdio.h>

void piramide(int N){
    int spaces;
    for (int i = 1; i<=N; i++){
        spaces = 2*(N-i);

        for (int j = 1; j<=spaces; j++){
            printf(" ");
        }

        for (int k = 1; k<=i; k++){
            printf("%d", k);
            if (i!=1){
                printf(" ");
            }
        }

        for (int l = i-1; l>0; l--){
            printf("%d", l);
            if (l!=1){
                printf(" ");
            }
        }
        
        

        printf("\n");
    }

}

int main(){
    int num;
    while (1==1){
        scanf("%d", &num);
        if (num >= 2){
            break;
        }
    }
    piramide(num);
    return 0;
}