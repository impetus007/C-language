
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
// #include<stdio.h>
// int main(){
//     int no , sum;
//     scanf("%d" , &no);
//     sum = no%10;
//     no = no/10;
//     sum = sum + no%10;
//     no = no/10;
//     sum = sum + no;
//     printf("%d",sum);
//     return 0;
// }


//write a program to find area of rectangle , circle , square , simlpe interest , compound interest , convert degree centigrate to degree fahrenhiet


// if else
// #include<stdio.h>
// int main(){
//     int a =10 , b=20;
//     if(a>b){
//         printf("a is greater than b");
//     }else{
//         printf("a is lesser than b");
//     }
//     return 0;
// }



// write a program to find maximum of any 2 integer using bu user
// #include<stdio.h>
// int main(){
//     int a , b;
//     printf("enter two values for compairing them : ");
//     scanf("%d%d" , &a , &b);
//     if(a>b){
//         printf("maximum no is  :  %d" , a);
//     }else{
//          printf("maximum no is  :  %d" , b);
//     }
// return 0;
// }



// write a program to find the grater no in 3 input
// #include<stdio.h>
// int main(){
//     int a , b , c , max=0; 
//     printf("Enter a 3 different no : ");
//     scanf("%d%d%d" , &a ,&b ,&c);
//     if(a>b){
//         max =a ;
//         if(max>c){
//             printf("maximum no is  :  %d" , max);
//         }
//         else{
//             printf("maximum no is   : %d" , c);
//         }
//     }else{
//         max=b;
//         if(max>c){
//             printf("maximum no is   : %d" , b);
//         }
//         else{
//             printf("Maximum no is   :%d" , c);
//         }
//     }
// return 0;
// }

// aliter code of above question
#include<stdio.h>
int main(){
    int a, b,c , max;
    printf("Enter any three no...%d");
    scanf("%d%d%d" ,&a,&b ,&c);
    if(a>b && a>c){
        max=a;
    }
    if(b>a && b>c){
        max=b;
    }else{
        max=c;
    }
    printf("Maximum is ...%d" , max);
    return 0;

}