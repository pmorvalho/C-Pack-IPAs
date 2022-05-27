#include <stdio.h>

#define MAX 80


int main(){
    char v1[MAX], v2[MAX];
    int i = 0, c, len1 = 0, len2 = 0, exit = 0;

    while(i < MAX && (c = getchar()) != '\n' && c != EOF){
        v1[i] = c;
        i++;
        len1++;
    }
    v1[i] = '\0';

    i = 0;
    while(i < MAX && (c = getchar()) != '\n' && c != EOF){
        v2[i] = c;
        i++;
        len2++;
    }
    v2[i] = '\0';

    if(len1 > len2) {
        printf("%s\n", v1);
    } else if(len1 < len2) {
        printf("%s\n", v2);
    } else {
        i = 0;
        while(i < MAX && v1[i] != '\0' && v2[i] != '\0' && !exit){
            if(v1[i] > v2[i]) {
                printf("%s\n", v1);
                exit = 1;
            }
            else if(v1[i] < v2[i]) {
                printf("%s\n", v2);
                exit = 1;
            }
            else i++;
        }
    }

    return 0;
}
