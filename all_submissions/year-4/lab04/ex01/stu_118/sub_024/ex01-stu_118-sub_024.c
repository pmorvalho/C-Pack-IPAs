
#include <stdio.h>
#define MAX 100

int main()
{
    int n;
    scanf("%d", &n);
    int num[MAX];
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        for (int j = 0; j < num[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}