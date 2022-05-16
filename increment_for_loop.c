#include<stdio.h>

int main(){
int n;
printf("Enter the Value\n");
scanf("%d", &n);
for(int i=n; i<10; i++){
    printf("%d\n", i+1);
}
return 0;
}