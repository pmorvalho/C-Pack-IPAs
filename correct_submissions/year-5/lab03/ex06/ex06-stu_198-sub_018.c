
#include <stdio.h>
#define MAX 100

int main() {
    char s[MAX];
    int i;
    long int sum = 0;
    scanf("%s", s);
    for(i = 0; i < MAX; i++){
        if (s[i] == '\0'){
            break;
        }
        sum += (int)(s[i] - '0');
    }
    if (sum % 9 == 0){
        printf("yes\n");
    }else{
        printf("no\n");
    }
    return 0;
}