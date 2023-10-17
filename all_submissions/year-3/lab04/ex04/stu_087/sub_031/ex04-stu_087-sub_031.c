
#include <stdio.h>
#define MAX 80

int getLength(char word[]){
    int i=0;
    while (word[i] != '\0'){
        i++;
    }
    return i;
}

void isPalindrome(char word[], int lenght){

    int i;

    for (i = 0; i < (lenght/2); i++)
    {
        if (word[i] != word[lenght-1-i])
        {
            printf("no\n");
            return;
        }
        
    }
    printf("yes\n");

}

int main(){

    char word[MAX];
    int length;

    scanf("%s", word);

    length = getLength(word);

    isPalindrome(word, length);
    
    return 0;
}