 #include<stdio.h>
 int main()
 {
     int v,u,a,s;
     printf("the initial velocity =");
     scanf("%d",&u);
     printf("the acceleration =");
     scanf("%d",&a);
     printf("the displacement =");
     scanf("%d",&s);
     v=u*u+ 2*(a*s);
     printf("The final velocity=%d ",v*v);
     return 0;
 }