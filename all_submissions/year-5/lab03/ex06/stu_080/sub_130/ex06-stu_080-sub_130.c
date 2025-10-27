
#include <stdio.h>

int main(){
    int num;
    int count = 0;
    int zero = '0';

    while((num = getchar()) != '\n') count += (num - zero);

    if(count % 9 == 0) printf("yes\n");
    else printf("no\n");

    return 0;
}