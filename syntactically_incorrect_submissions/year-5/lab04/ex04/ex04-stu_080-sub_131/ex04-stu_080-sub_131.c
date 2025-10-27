
#include <stdio.h>
#define MAX 80

int size(char string[]) {
    int i;
    for (i = 0; string[i] != '\0'; i++);
    return i;
}


int main(){
    char word[MAX];
    scanf("%s", word);
    int count = size(word);

    for(int i = 0; i < count; i++){
        if (word[i] != word[count-i-1] &&
            word[i] != word[count-i-1]+'a'-'A' &&
            word[i] != word[count-i-1]-'a'+'A') {
            printf("no\n");
            return 0;
        }
    }

    printf("yes\n");
    return 0;


}