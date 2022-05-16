#include<stdio.h>

int main(){
int a=0;
int n;
printf("enter the value\n");
scanf("%d", &n);
do{
printf("value is %d\n", a);
a++;
}while(a<=n);
return 0;
}