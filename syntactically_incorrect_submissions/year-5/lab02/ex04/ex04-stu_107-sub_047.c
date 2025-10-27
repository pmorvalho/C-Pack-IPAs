
#include<stdio.h>


int main()
{
    int m1, m2, m3;

    scanf("%d%d%d", m1, m2, m3);

    if(m1 > m2 && m2 > m3)
        printf("%d %d %d\n", m3, m2, m1);

    else if( m1 > m3 && m3 > m2)
        printf("%d %d %d\n", m2, m3, m1);

    else if(m2 > m1 && m1 > m3)
        printf("%d %d %d\n", m3, m1, m2);

    else if( m2 > m3 && m3 > m1)
        printf("%d %d %d\n", m1, m3, m2);

    else if( m3 > m1 && m1 > m2)
        printf("%d %d %d", m2, m1, m3);

    else
        printf("%d %d %d", m1, m2, m3);
}