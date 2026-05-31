

#include <stdio.h>
#include <string.h>

#define MAX_STR 101

int main() {
    char str1[MAX_STR];
    char str2[MAX_STR];

    scanf("%s %s", str1, str2);

    if (strcmp(str1, str2) > 0) {
        printf("%s\n", str1);
	}
	
	else {
        printf("%s\n", str2); 
    }

    return 0;
}