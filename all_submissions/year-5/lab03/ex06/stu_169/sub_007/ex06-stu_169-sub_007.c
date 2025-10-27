



 





#include <string.h>

int main() {
    char num[101];  
    int soma = 0;

    
    scanf("%100s", num); 

    
    for (int i = 0; num[i] != '\0'; i++) {
        soma += num[i] - '0';  
        
    }

    
    if (soma % 9 == 0)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}