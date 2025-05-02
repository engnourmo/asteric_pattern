#include <stdio.h>
int rows;
int counter, num;
int main() {
    printf("enter the number of rows : ");
    scanf("%i", &rows);
    num = rows;
    while(rows <= num){
        for (counter = 1; counter <= rows;counter++){
            printf("*");
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