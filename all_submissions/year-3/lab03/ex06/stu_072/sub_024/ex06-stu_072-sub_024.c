

#include <stdio.h>

int main(){
    char num[101];
    int i, sum = 0;

    scanf("%s", num);

    for (i = 0; num[i] != '\0'; i++){
        
        if (num[i] >= '0' && num[i] <= '9'){
            sum += num[i] - '0';
        }
    }
    
    if (sum % 9 == 0){
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}
