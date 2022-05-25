#include<stdio.h>
#include<string.h>


#define MAX 80

int main(){

    char s[MAX];
    int j,i=0, no=0;

    scanf("%s",s);

    j = strlen(s);

    while (s[i] == s[j]){
        if (s[i] != s[j])
            no = 1;
        i++;
        j++;
    }

    if (no)
        printf("no\n");
    else
        printf("yes\n");
    
    


    return 0;
}