

#include <stdio.h>
#define MAX 101   



int main(){
    int i;
    char s1[MAX], s2[MAX];

    scanf("%s %s", s1, s2);

    for(i=0; i < MAX; i++){
        if (s1[i] > s2[i]){
           printf("%s\n", s1);
            break; 
        }
        if (s2[i] > s1[i]){
            printf("%s\n", s2);
            break;
        }
            
    }
    return 0;
}