
#include<stdio.h>
#define MAX 80 

int main(){
    int i, len=0, result;
    char s[MAX]; 

    scanf("%s", s);

    for(i=0; i<MAX-1 && s[i]!='\0'; i++) 
        len++;

    for(i=0; i<len; i++){ 
        if(s[i]==s[len-1-i])
            result = 1; 
        else{
            result = 0;
            break;
        }
    }
    if(result==1)
        printf("yes\n"); 
    else
        printf("no\n");
    
    return 0;
}