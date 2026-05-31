
#include <stdio.h>
#define MAX 80
int main() {
    int i,max=0;
    int c[MAX];
    for (i=0;c[i]!='\n' && c[i]!='\0';i++) {
        scanf("%d",&c[i]);
        if (c[i]>max) {
            max=c[i];
        }
    }
    printf("%d",max);
    return 0;
}