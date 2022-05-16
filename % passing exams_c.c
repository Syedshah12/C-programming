#include<stdio.h>

int main(){
int phy, math, chem;
float total;
printf("enter your phy marks\n");
scanf("%d", &phy);
printf("enter your chem marks\n");
scanf("%d", &chem);
printf("enter your maths marks\n");
scanf("%d", &math);
total = (phy + math + chem)/3;
if((total<40)|| phy<33 || chem<33 || math<33){
    printf("you are fail..and your percentage is %f", total);
}
else{
    printf("you are pass..and your percentage is %f", total);
}
return 0;
}