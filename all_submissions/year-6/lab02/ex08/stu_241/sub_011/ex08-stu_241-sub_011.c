
#include <stdio.h>

int main() {
    int n;
    float f,media=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%f",&f);
        media+=f;
    };
    media/=n;
    printf("%.2f\n",media);
    return 0;
}