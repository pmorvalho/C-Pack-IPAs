
#include <stdio.h>

int main() {
    int input_nr_secounds, hours, minutes, secounds;

    scanf("%d", &input_nr_secounds);

    hours = input_nr_secounds / 3600;
    minutes = (input_nr_secounds % 3600) / 60;
    secounds = (input_nr_secounds % 3600) % 60;

    

    printf("%02d:%02d:%02d\n", hours, minutes, secounds);

    return 0;
}