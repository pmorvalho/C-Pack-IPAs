
#include <stdio.h>
#include <string.h>

#define MAX 80

int main(){
    int i = 0, j;
    char s[MAX];

    scanf("%s", s);
    
    j = strlen(s) - 1;
    
    while(j >= i){
        if(s[j] == s[i]){
            j--;
            i++;
        }
        else{
            printf("no\n");
            return 0;
            
        }
    }
    printf("yes\n");
    
    return 0;

}