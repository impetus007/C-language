
// average of a three no

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     float avg;
//     printf("enter a three no");
//     scanf("%d  %d  %d" , &a ,&b ,&c);
//     avg = (a+b+c)/3;
//     printf("%f" , avg);
//     return 0;
// }


//enter  a 3 digit no and  find the sum of its digit

#include<stdio.h>
int main(){
    int no , sum;
    scanf("%d" , &no);
    sum = no%10;
    no = no/10;
    sum = sum + no%10;
    no = no/10;
    sum = sum + no;

    printf("%d",sum);
    return 0;

}


//write a program to find area of rectangle , circle , square , simlpe interest , compound interest , convert degree centigrate to degree fahrenhiet
