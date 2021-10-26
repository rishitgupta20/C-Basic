 #include<stdio.h>
 int main()
 {
     int x1,x2,y1,y2,slope;
     scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
     slope=(y2-y1)/(x2-x1);
     printf("slope = %d",slope);
     printf("\ntan= %d",slope);
     return 0;
 }