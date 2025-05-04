#include <stdio.h>

int ID_1 = 123,ID_2 = 456,ID_3 = 789;
int pass_1 = 789, pass_2 = 456, pass_3 = 123;
int num1,num2,counter;

int main(){
    printf("enter your ID : ");
    scanf("%i", &num1);
    if(num1 == ID_1){
        for (counter = 0; counter < 3;counter++){
            printf("enter your password : ");
            scanf("%i", &num2);
            if(num2 == pass_1){
                printf("welcome\n");
                break;
            }
            else if((num2 != pass_1) && (2 == counter)){
                printf("incorrect password, no more tries\n");
            }
            else{
                printf("try again\n");
            }
        }
    }
    else if(num1 == ID_2){
        for (counter = 0; counter < 3;counter++){
            printf("enter yor password : ");
            scanf("%i", &num2);
            if(num2 == pass_2){
                printf("welcome\n");
                break;
            }
            else if((num2 != pass_2) && (2 == counter)){
                printf("incorrect password, no more tries\n");
            }
            else{
                printf("try again\n");
            }
        }
    }
    else if(num1 == ID_3){
        for (counter = 0; counter < 3;counter++){
            printf("enter your password : ");
            scanf("%i", &num2);
            if(num2 == pass_3){
                printf("welcome\n");
                break;
            }
            else if((num2 != pass_3) && (2 == counter)){
                printf("incorrect password, no more tries\n");
            }
            else{
                printf("try again\n");
            }
        }
    }
    else{
        printf("you are not registered\n");
    }
    return 0;
}