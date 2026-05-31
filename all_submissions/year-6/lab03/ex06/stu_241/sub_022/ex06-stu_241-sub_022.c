
#include <stdio.h>

int main(){
    int c,total=0;
    while((c=getchar())!=EOF){
        if (c>='0' && c<='9')
            total+=c-'0';
    }
    if (total%9 == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}