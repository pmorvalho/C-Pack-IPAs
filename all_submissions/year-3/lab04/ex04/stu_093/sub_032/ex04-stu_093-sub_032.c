
#include <stdio.h>
#include <string.h>
#define DIM 80
#define YES 1
#define NO 0

int main(){

    char str[DIM];
    int i, print = YES; 

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
        if(str[i] != str[(strlen(str)) - (i + 1)])
            print = YES;

    if(print == NO)
        printf("no\n");
    else
        printf("yes\n");

    return 0;
}