
#include <stdio.h>

int main() {
    char c;
    int calc;

    while (c = getchar() && c != EOF) {
        int num = 0;
        if (c != "+" && c != "-" && c != " ") {
            num = num * 10 + c;
        } else if (c == "+" || c == "-") {
            
        }
    }

    return 0;
}