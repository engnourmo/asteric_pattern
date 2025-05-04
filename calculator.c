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
int devcrement_f(int num);
int factorial_f(int num);

//main function
//main function
int main(){
    printf("+ -> add\n- -> sub\n* -> mul\n/ -> devide\n& -> logic AND\n| -> logic OR\n~ -> loguc NOT\n^ -> logic XOR\nR -> remider\nI -> increment\nD -> decrement\nF ->factorial\n");
    printf("enter the operand : ");
    scanf("%c", &operator); 
    if(operator == 'I' || operator == 'D' || operator == 'F' || operator == '~'){
        printf("enter your first number : ");
        scanf("%i",&number_1);
    }
    else{
        printf("enter your first number : ");
        scanf("%i",&number_1);
        printf("enter your second number : ");
        scanf("%i", &number_2);
    }
    switch(operator){
        case ('+') :
            printf("Result: %d\n", add_f(number_1, number_2)); // Print result
            break;
        case ('-') :
            printf("Result: %d\n", sub_f(number_1, number_2)); // Print result
            break;
        case ('*') :
            printf("Result: %d\n", mul_f(number_1, number_2)); // Print result
            break;
        case ('/') :
            printf("Result: %d\n", devide_f(number_1, number_2)); // Print result
            break;
        case ('&') :
            printf("Result: %d\n", l_AND_f(number_1, number_2)); // Print result
            break;
        case ('|') :
            printf("Result: %d\n", L_OR_f(number_1, number_2)); // Print result
            break;
        case ('~') :
            printf("Result: %d\n", l_not_f(number_1)); // Print result
            break;
        case ('^') :
            printf("Result: %d\n", XOR_f(number_1, number_2)); // Print result
            break;
        case ('R') :
            printf("Result: %d\n", Reminder_f(number_1, number_2)); // Print result
            break;
        case ('I') :
            printf("Result: %d\n", increment_f(number_1)); // Print result
            break;
        case ('D') :
            printf("Result: %d\n", devcrement_f(number_1)); // Print result
            break;
        case ('F') :
            printf("Result: %d\n", factorial_f(number_1)); // Print result
            break;
        default :
            printf("invalid operator!!\n");
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
    int tempnum = 0;
    if(num2 == 0){
        printf("invlaid number2\n");
    }
    else{
        tempnum = (num1 / num2);
    }
    return tempnum;
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
    int tempnum = 0;
    if(num2 == 0){
        printf("invlaid number2\n");
    }
    else{
        tempnum = (num1 % num2);
    }
    return tempnum;
}

int increment_f(int num){
    return (++num);
}

int devcrement_f(int num){
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