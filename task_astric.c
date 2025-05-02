#include <stdio.h>

int num = 0;
int number = 0, counter = 0;

int main(){
    printf("enter the number of rows : ");
    scanf("%i", &number);
    while(num <= number){
        for (counter = 0; counter < num;counter++){
            printf("*");
        }
        printf("\n");
        num++;
    }
    return 0;
}