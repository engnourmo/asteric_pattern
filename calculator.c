#include <stdio.h>

char operator;
int number_1, number_2;

//functions prototyping
int add_f(int num1, int num2);
int sub_f(int num1, int num2);
int mul_f(int num1, int num2);
int devide_f(int num1, int num2);
int l_AND_f(int num1, int num2);
int L_OR_f(int num1, int num2);
int l_not_f(int num);
int XOR_f(int num1, int num2);
int Reminder_f(int num1, int num2);
int increment_f(int num);
int decrement_f(int num);
int factorial_f(int num);

//main function
//main function
int main(){
    printf("+ -> add\n- -> sub\n* -> mul\n/ -> devide\n& -> logic AND\n| -> logic OR\n~ -> loguc NOT\n^ -> logic XOR\nR -> remider\nI -> increment\nD -> decrement\nF ->factorial\n");
    printf("enter the operand : ");
    scanf("%c", &operator);
    if((operator == 'F') || (operator == 'I') || (operator == '~') || (operator == 'D')){
        printf("enter you number : ");
        scanf("%i", &number_1);
    }
    else{
        printf("enter your first number : ");
        scanf("%i", &number_1);
        printf("enter your second number : ");
        scanf("%i", &number_2);
    }
    switch(operator){
        case '+' :
            printf("Result = %i\n", add_f(number_1, number_2));
            break;
        case '-' :
            printf("Result = %i\n", sub_f(number_1, number_2));
            break;
        case '*' :
            printf("Result = %i\n", mul_f(number_1, number_2));
            break;
        case '/' :
            if(0 == number_2){
                printf("Invalid deide by 0\n");
            }
            else{
                printf("Result = %i\n", devide_f(number_1, number_2));
            }
            break;
        case '&' :
            printf("Result = %i\n", l_AND_f(number_1, number_2));
            break;
        case '|':
            printf("Result = %i\n", L_OR_f(number_1, number_2));
            break;
        case '~':
            printf("Result = %i\n",l_not_f(number_1));
            break;
        case '^' :
            printf("Result = %i\n", XOR_f(number_1, number_2));
            break;
        case 'R' :
            if(0 == number_2){
                printf("Invalid devide by 0\n");
            }
            else{
                printf("Result = %i\n", Reminder_f(number_1, number_2));
            }
            break;
        case 'I' :
            printf("Reuslt = %i\n", increment_f(number_1));
            break;
        case 'D' :
            printf("Result = %i\n", decrement_f(number_1));
            break;
        case 'F' :
            printf("Result = %i\n", factorial_f(number_1));
            break;
        default:
            printf("Ivalid Operator!!");
            break;
    }
    return 0;
}

//functions implementation
int add_f(int num1, int num2){
    return (num1 + num2);
}

int sub_f(int num1 ,int num2){
    return (num1 - num2);
}

int mul_f(int num1,int num2){
    return (num1 * num2);
}

int devide_f(int num1,int num2){
        return (num1 / num2);
}

int l_AND_f(int num1,int num2){
    return (num1 & num2);
}

int L_OR_f(int num1,int num2){
    return (num1 | num2);
}

int l_not_f (int num){
    return (~num);
}

int XOR_f(int num1,int num2){
    return (num1 ^ num2);
}

int Reminder_f(int num1, int num2){
    return (num1 % num2);
}

int increment_f(int num){
    return (++num);
}

int decrement_f(int num){
    return (--num);
}

int factorial_f(int num){
    int tempnum = 0;
    if (0 == num){
        tempnum = 0;
    }
    else if (1 == num){
        tempnum = 1;
    }
    else{
        tempnum = num * factorial_f(num - 1);
    }
    return tempnum; // preffered one return at the end of any function
}