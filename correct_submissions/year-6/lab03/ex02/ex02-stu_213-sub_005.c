

#include <stdio.h>

void piramide(int num){
    int i, j;
    for (i = 0; i < num; i++){
        for (j = 1; j < num -i; j++){
            printf("  ");
        }
        for (j = 1; j <= i + 1; j++){
            if (j > 1)
                printf(" ");
            printf("%d", j);
        }
        for (j = i; j > 0; j--){
            printf(" %d", j);
        }
        printf("\n");
    }
}

int main()
{
    int num;

    scanf("%d", &num);
    piramide(num);
    return 0;
}