#include <stdio.h>

int main ()
{
 int N,h=0,m=0,s=0;
 scanf ("%d",&N);
 h = N/1440;
 N = N - h*1440;
 m = N/60;
 N = N - m*60;
 s = N;
 if (h<10){
   if (m<10){ 
      if (s<10)
	printf ("0%d:0%d:0%d\n",h,m,s);
      else
        printf ("0%d:0%d:%d\n",h,m,s);
          }
   else 
       {
      if (s<10)
        printf ("0%d:%d:0%d\n",h,m,s);
      else
        printf ("0%d:%d:%d\n",h,m,s);
       } 
 }
 else {
   if (m<10)
        { 
      if (s<10)
        printf ("%d:0%d:0%d\n",h,m,s);
      else
        printf ("%d:0%d:%d\n",h,m,s);
        }
   else
        {
      if (s<10)
        printf ("%d:%d:0%d\n",h,m,s);
      else
        printf ("%d:%d:%d\n",h,m,s);
        }
    }
 return 0;
}
