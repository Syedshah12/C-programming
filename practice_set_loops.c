// #include<stdio.h>
// //reverse multiplication table (for loop)
// int main(){
// printf("***Multiplication table of 10\n");
// for(int i=10; i; i--){
//     printf("10*%d=%d\n",i,10*i);
// }
// return 0;
// }

// #include<stdio.h>
// //tabel of 10
// int main(){
// for(int i=1; i<=10; i++){
//     printf("10*%d=%d\n", i,10*i);
// }
// return 0;
// }

#include <stdio.h>

// #include<stdio.h>
// // sum of natural no. from 1-10;
// int main(){
// int i, sum, n;
// sum=0;
// for(i=0; i<=10; i++){
//     sum +=i;
// }
// printf("%d", sum);
// return 0;
// }




#include<stdio.h>

int main(){
int i=0;
int factorial=1;
int n=7;
for(i=1; i<=n; i++){
    factorial *=i;
}
printf("factorial of 7  %d is %d", n, factorial);
return 0;
}