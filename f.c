#include<stdio.h>

int main(){
int  sum=0, count;
for(count=10;count<=30;++count){
    if(count%2!=0){
        sum=sum+count;
    }
}
printf("sum of even numbers from 1 to 10 is %d\n",sum);
return 0;
}