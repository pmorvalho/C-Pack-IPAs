

#include <stdio.h>
#define MAX 100

int main(){

    long long num1, num2;
    char s1[MAX], s2[MAX];
    int i;
    scanf("%s%s", s1 ,s2);
    
    while (i < MAX)
    {
        if ((s1[i] > s2[i]) ||(s1[i] == s2[i] && i == MAX -2)){
            printf("%s\n", s1);
            break;
        }
        if (s1[i] < s2[i]){
            printf("%s\n", s2);
            break;
        }
        else
            i++;
        
    }
    
    return 0;
}


