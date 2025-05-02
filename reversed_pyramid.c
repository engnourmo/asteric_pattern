#include <stdio.h>

int num = 0;
int rows = 0, counter = 0,counter2 =0;

int main(){
    printf("enter the number of rows : ");
    scanf("%i", &rows);
    num = rows;
    while(rows <= num){
        for (counter = 0; counter < num - rows;counter++){
            printf(" ");
        }
        for (counter2 = 0; counter2 < rows;counter2++){
            printf("* ");
        }
        printf("\n");
        rows--;
        if(rows == 0){
            break;
        }
        else{}
    }
    return 0;
}