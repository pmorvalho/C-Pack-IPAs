
#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char s1[MAX], s2[MAX];
    int lenS1, lenS2, i;
    scanf("%s %s", s1, s2);
    lenS1 = strlen(s1);
    lenS2 = strlen(s2);

    if(lenS1 > lenS2){
        printf("%s\n", s1);
        return 0;
    }else if(lenS1 < lenS2){
        printf("%s\n", s2);
        return 0;
    }else{
        for(i = 0; i < lenS1; i++){
            if(s1[i] - '0' > s2[i] - '0'){
                printf("%s\n", s1);
                return 0;
            }else if(s1[i] - '0' < s2[i] - '0'){
                printf("%s\n", s2);
                return 0;
            }
        }
    }
    printf("%s\n", s1);
    return 0;
}