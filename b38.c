#include<stdio.h>
 int main()
 {
     int a,b,c,tpop;
     a=30000;
     //FOR THE FIRST YEAR POPULATION
     b=30000*20/100;
     //FOR THE SECOND YEAR POPULATION
     c=(30000+b)*30/100;
     tpop=a+b+c;
     printf("total population after 2 years = %d",tpop);
     return 0;
 }