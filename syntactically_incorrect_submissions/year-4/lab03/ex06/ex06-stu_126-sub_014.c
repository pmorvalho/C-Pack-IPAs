
#include <stdio.h>
#include <string.h>

int main() {
    char input[101];  
    scanf("%s", input);

    
    int length = strlen(input);
    int num = 0;
    for (int i = 0; i < length; i++) {
        num = num*10 + (input[i]-'0') ;
    }

    
    if (num % 9 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
