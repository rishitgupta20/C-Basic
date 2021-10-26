#include<stdio.h>
 int main()
 {
     int a,b,c,d,e,f,g,h;
     printf("give the value in money\n");
     scanf("%d",&a);
     b=a/2000;
     c=a-b*2000;
     d=c/500;
     e=a-b*2000 -d*500;
     f=e/200;
     g=a-b*2000-d*500-f*200;
     h=g/100;
     printf("2000=%d\n",b);
       printf("500=%d\n",d);
         printf("200=%d\n",f);
          printf("100=%d\n",h);
    return 0;
 }