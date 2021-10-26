 #include<stdio.h>
 int main()
 {
     int a,b,c,d,e;
     printf("give the value in integer\n");
     scanf("%d",&a);
     b=a/365;
     c=a-b*365;
     e=c/30;
     d=a-b*365-e*30;
     printf("year=%d\n",b);
       printf("month=%d\n",e);
         printf("days=%d\n",d);
    return 0;
 }

