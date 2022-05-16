#include<stdio.h>

int main(){
int machsticks,userchoice,computer_choice;
machsticks=21;
printf("Total machsticks%d\n",machsticks);
printf("Pick up the machsticks between(1-4\n)");
scanf("%d",&userchoice);
if(userchoice>4){
    printf("Invalid entry");
}
computer_choice=5-userchoice;
printf("computer picks up=%d",computer_choice);
machsticks=machsticks-userchoice-computer_choice;
if(machsticks==1){
    printf("you have been lost");
}

return 0;
}