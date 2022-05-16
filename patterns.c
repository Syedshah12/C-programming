#include<stdio.h>

int main(){
int r,c,k;
for(r=1; r<=4 ; r++){
    if(r%2==0){
        printf(" ");
    }
    for(c=1; c<=5 ; c++){
        printf("*");
    }
    printf("\n");
}
return 0;
}