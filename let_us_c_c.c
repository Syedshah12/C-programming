#include<stdio.h>

int main(){
float s1,s2,s3,s4,s5,agr,per_marks,marks_obt;
printf("enter the marks in s1\n");
scanf("%f", &s1);
printf("enter the marks in s2\n");
scanf("%f", &s2);
printf("enter the marks in s3\n");
scanf("%f", &s3);
printf("enter the marks in s4\n");
scanf("%f", &s4);
printf("enter the marks in s5\n");
scanf("%f", &s5);
marks_obt=s1+s2+s3+s4+s5;
agr=marks_obt/5;
per_marks=marks_obt/1000*100;
printf("agregate is %f\n", agr);
printf("total marks %f\n", marks_obt);
printf("per marks is %f\n", per_marks);
return 0;
}