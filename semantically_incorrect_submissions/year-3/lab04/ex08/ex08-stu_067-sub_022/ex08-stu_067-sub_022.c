
#include<stdio.h>
#include <string.h>

#define MAX 100

int main(){
    char num1[MAX]={0};
    char num2[MAX]={0};
    

    int i, c;
    
    for(i=0; i<MAX-1 && (c=getchar())!= EOF && c != '\n'; i++){
        if(c>='0' && c<='9')
            num1[i] = c;
    num1[i] = '\0';
    }
    puts(num1);

    for(i=0; i<MAX-1 && (c=getchar())!= EOF && c != '\n'; i++){
        if(c>='0' && c<='9')
            num2[i] = c;
    num2[i] = '\0';
    }
    puts(num2);

    

    return 0;
}