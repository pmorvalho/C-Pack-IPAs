

# include <stdio.h>
# include <string.h> 

# define DIM 100

int main() {
    
    char v1[DIM],v2[DIM];
    
    
    
    
    
    
    
    
    
    

    

    
    
    
    
    
    
    
    scanf("%s %s",v1,v2);
    if (strlen(v1) == strlen(v2)) {
        if (strcmp(v1,v2) > 0) {
            printf("%s",v1);
        } else 
            printf("%s",v2);
        putchar('\n');
    }   
    return 0;
}