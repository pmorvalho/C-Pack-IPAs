

#include <stdio.h>
#include <string.h>

#define MAXSTRING 80

int is_palindrome(char s[]){
    
    int size = strlen(s)-1;
    for(int i=0; i<size/2; i++){
        if(s[i] != s[size-i]){
            return 1;
        }
    }
    return 0;

}

int main(){
    char word[MAXSTRING];
    scanf("%s", word);
    if(is_palindrome(word)==1){
        printf("no\n");
    }
    else printf("yes\n");
}