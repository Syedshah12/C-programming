#include<stdio.h>

int main(){
float lenth,breadth,radius,area,circumference;
printf("length\nbreadth\nradius\n");
scanf("%f%f%f", &lenth,&breadth,&radius);
area=breadth*lenth;
circumference=2*(lenth + breadth);
printf("area is%f\n",area);
printf("circumference is%f\n",circumference);
return 0;
}