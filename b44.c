 #include<stdio.h>
 int main()
 {
     int v,u,t,a,s;
    u=0;
    t=2;
    a=4;
    //final velocity
    v=u+a*t;
    printf("final velocity = %d\n",v);
    //distance cover
    s=u*t+a*t*t/2;
    printf("distnce is = %d",s);
    return 0;
 }