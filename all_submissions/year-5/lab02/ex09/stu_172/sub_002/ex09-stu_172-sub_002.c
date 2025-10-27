
# include <stdio.h>

int main(){
    int seconds,minutes=0,hours=0;

    scanf("%d",&seconds);
    minutes = seconds/60;
    if (minutes>60)
        hours = minutes/60;
    minutes -= hours * 60;
    seconds -= (hours*3600 + minutes*60);

    if (hours<10)
        printf("0%d:",hours);
    else
        printf("%d:",hours);
    if (minutes<10)
        printf("0%d:",minutes);
    else
        printf("%d:",minutes);
    if (seconds<10)
        printf("0%d",seconds);
    else
        printf("%d",seconds);     
    
    return 0;
}