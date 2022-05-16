#include<stdio.h>

int main(){
    int n;
    printf("enter the number\n");
    scanf("%d", n);

while(n<10){
printf("%d * %d = %d\n",n,n*10);
n++;
}
return 0;
}