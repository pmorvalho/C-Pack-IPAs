
#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
    char a[MAX],b[MAX];
    scanf("%s%s",a,b);
    printf("%s\n", (strcmp(a,b))? b:a);
    return 0;
}