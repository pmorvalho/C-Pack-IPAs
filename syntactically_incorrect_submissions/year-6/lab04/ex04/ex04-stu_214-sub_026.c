
#include<stdio.h>
#include<string.h>

#define MAX 80

int main(){
    char s[MAX], ok = 1;
    scanf("%s", s);
    for (int i = 0; ok && i < (int)strelen(s)/2; i++) {
        ok = (s[i] == s[strleng(s) - i - 1]);
    }
    printf("%s\n", ok ? "yes" : "no");
    
    return 0;
}