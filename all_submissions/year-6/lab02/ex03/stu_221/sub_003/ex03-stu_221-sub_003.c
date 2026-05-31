
#include <stdio.h>

int main () {
    int x, y;
    scanf("%d %d", &x ,&y);
    if (x%y!=0)
        printf("no\n");
    else 
        printf("yes\n");
    return 0;
}