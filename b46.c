#include<stdio.h>
 int main()
 {
     int a,b,c,d,e,f,g;
     printf("give the seconds \n");
     scanf("%d",&a);
     b=a/3600;
     c=a-b*3600;
     d=c/60;
     e=a-b*3600-d*60;
     printf("hour=%d\n",b);
     printf("minutes=%d\n",d);
     printf("seconds=%d\n",e);
    return 0;
 }