#include<stdio.h>
int main (){
    // swapping values
  /*  int a,b,c;
    a=1,b=2;
    printf("%d%d",a,b);
    c=a;
    a=b;
    b=c;
     printf("%d%d",a,b); */

     // without using third variable
   
   // method 1
  /*   int a,b;
    a=1,b=2;
    a=a+b;
    b=a-b;
    a=a-b;
     printf("%d%d",a,b);
     */
    //method 2
     int a,b;
    a=1,b=2;
    a=a*b;
    b=a/b;
    a=a/b;
     printf("%d%d",a,b);
     return 0;

}