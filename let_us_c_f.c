#include<stdio.h>

int main(){
int c,d,e;
printf("number 1 & 2 is\n");
scanf("%d%d",&c,&d);
e=c;
c=d;
d=e;
printf("\nnew number location at C is=%d",c);
printf("\nnew number location at d is=%d",d);
return 0;
}