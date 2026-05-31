
#include <stdio.h>
#define MAX 80
int isPali(char s[]);
int mystrlen(char s[]);

int main() {
    char s[MAX] = "";
    scanf("%s", s);
    printf("%s\n", isPali(s)? "yes": "no");
    return 0;
}
int isPali(char s[]) {
    int i=0, j=mystrlen(s)-1;
    while(i<j)
        if(s[i++] != s[j--])
            return 0;
    return 1;
}

int mystrlen(char s[]) {
    int l=0;
    while(s[l] != '\0')
        l++;
    return l;
}