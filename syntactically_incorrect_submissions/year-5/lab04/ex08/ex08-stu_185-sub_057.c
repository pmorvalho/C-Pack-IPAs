
#include <stdio.h>
#include <string.h>
#define MAX 101
int main(){
    int i;
    char n1[MAX], n2[MAX];
    scanf("%s%s", n1, n2);

    int len1 = strlen(n1);
    int len2 = strlen(n2);

    if (len1 > len2) {
        printf("%s\n", n1);
        return 0;
    } else if (len2 > len1) {
        printf("%s\n", n2);
        return 0;
    }
    
    for (int i = 0; i < len1; i++) {
        if (n1[i] > n2[i]) {
            printf("%s\n", n1);
            return 0;
        } else if (n1[i] < n2[i]) {
            printf("%s\n", n2);
            return 0;
        }
    }
}