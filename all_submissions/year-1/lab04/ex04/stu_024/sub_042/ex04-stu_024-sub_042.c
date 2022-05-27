#include <stdio.h>
#include <string.h>
#define MAX 80

int main(){
    char string[MAX];
    int size;
    int state=1;
    int i=0;
    
    scanf("%s",string);
    size = strlen(string);

    for(i=0;i<=size;i++){
        if(string[i]!=string[size-i-1]){
            state=0;
        break;
        }
    }
    
    if (state==0){
        printf("no\n");
    }
    else{
        printf("yes\n");
    }
    return 0;

}