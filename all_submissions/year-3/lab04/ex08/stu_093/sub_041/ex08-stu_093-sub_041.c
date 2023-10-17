
#include <stdio.h>
#define DIM 100
#define TRUE 1
#define FALSE 0

void greatest(char str1[], char str2[]);

void greatest(char str1[], char str2[]){

    int i, print = FALSE;

    for(i = 0; str2[i] != '\0' && str2[i] != EOF; i++)
        if(str1[i] > str2[i])
            print = TRUE;
    
    if(print == TRUE)
        printf("%s\n", str1);
    else
        printf("%s\n", str2);
}

int main(){

    char str1[DIM], str2[DIM];

    scanf("%s%s", str1, str2);

    greatest(str1, str2);

    return 0;
}