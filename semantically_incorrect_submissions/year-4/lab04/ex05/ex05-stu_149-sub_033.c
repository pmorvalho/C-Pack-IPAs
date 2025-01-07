
#include <stdio.h>
#define MAX 80

int leLinha(char s[MAX]){
    char c;
    int i=0;
    while ((c=getchar())!='\n'&&c!=EOF) {
        s[i++]=c;
    } return 1;
}

int main() {
    char s[MAX];
    scanf("%s",s);
    leLinha(s);
    printf("%s\n",s);
    return 0;
}