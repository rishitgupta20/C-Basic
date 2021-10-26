 #include<stdio.h>
 int main()
 {
     int a,HRA,TA,net;
     scanf("%d",&a);
     HRA=a*15/100;
     TA=a*20/100;
     net=a-HRA-TA;
     printf("%d",net);
     return 0;
 }