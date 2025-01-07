

#include <stdio.h>
#define MAX 80

int size(char string[]) {
    int i;
    for (i = 0; string[i] != '\0'; i++);
    return i;
}

int main(){
    char string[MAX];
    int count;

    scanf("%s", string);
    count = size(string);

    for(int i = 0; i < count; i++){
        if (string[i] != string[count-i-1] &&
            string[i] != string[count-i-1]+'a'-'A' &&
            string[i] != string[count-i-1]-'a'+'A') {
            printf("no\n");
            return 0;
        }
    }

    printf("yes\n");
    return 0;
}