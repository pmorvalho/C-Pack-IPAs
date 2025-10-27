
#include <stdio.h>
#include <string.h>
#define MAX 80

int main(){
    int n,i;
    char s[MAX];
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n/2;i++){
        if(s[i]!= s[n-i-1]){
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");
    return 0;
}