#include<stdio.h>

int main(){
float farenhiet,centigrade;
printf("enter the temprature in farenhiet\n");
scanf("%f", &farenhiet);
centigrade=(farenhiet - 32) * 5/9;
printf("temprature in centigrade is%f\n", centigrade);
return 0;
}