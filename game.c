#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int number,guess,nguess=1;
srand(time(0));
number = rand()%100+1;

do{
    printf("Enter the number \n");
    scanf("%d", &guess);
if(guess>number){
    printf(" LOWER YOUR NUMBER: \n");
}
else if(guess<number){
    printf("HIGHER YOUR NUMBER: \n");
}
else{
    printf("you guess it in %d attempts",nguess);
}
nguess++;
}while(number!=guess);
return 0;
}