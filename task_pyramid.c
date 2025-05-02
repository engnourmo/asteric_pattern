#include <stdio.h>

int num = 0;
int number = 0, counter = 0,counter2 =0;

int main(){
    printf("enter the number of rows : ");
    scanf("%i", &number);
    while(num <= number){
        for (counter = 0; counter < number - num;counter++){
            printf(" ");
        }
        for (counter2 = 0; counter2 < num;counter2++){
            printf("* ");
        }
        printf("\n");
        num++;
    }
    return 0;
}