#include<stdio.h>

int main(){
float km,m,feet,inch,cm;
printf("enter the distance in km\n");
scanf("%f", &km);
m=1000*km;
cm=m*100;
inch=cm/2.54;
feet=inch/12;
printf("distance in m is %f\n", m);
printf("distance in cm is %f\n", cm);
printf("distance in inch is %f\n", inch);
printf("distance in feet is %f\n", feet);
return 0;
}