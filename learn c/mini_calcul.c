#include <stdio.h>

int main() {

    double num1 = 0.0;
    char oper = '\0';
    double num2 = 0.0;

    printf("enter your first number : ");
    scanf("%lf", &num1);

    printf("enter your operation signe (e.g. +, -, *, /): ");
    scanf(" %c", &oper);

    printf("enter your second number : ");
    scanf("%lf", &num2);

    switch (oper) {
        case '+':
            printf("result: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("result: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("result: %.2f\n", num1 * num2);
            break;
        case '/':
            printf("result: %.2f\n", num1 / num2);
            break;
        default:
            printf("invalid operator\n");
            break;
    }


    // printf("hello for the user that use this mini calculator\n");
     // float num1 = 0.0f;
     // char oper = '\0';
     // float num2 = 0.0f;
    //float result = 0.0f;

    // printf("enter your first number: ");
    // scanf("%f", &num1);

    // printf("enter your operator (+, -, *, /): ");
    // scanf(" %c", &oper);


    // printf("enter your second number: ");
    // scanf("%f", &num2);

    // if (oper == '+') {
        // printf("result: %.2f\n", num1 + num2);
    // } else if (oper == '-') {
        // printf("result: %.2f\n", num1 - num2);
    // } else if (oper == '*') {
        // printf("result: %.2f\n", num1 * num2);
    // } else if (oper == '/') {
        // printf("result: %.2f\n", num1 / num2);
    // } else {
        // printf("invalid operator\n");
        // return 1;
    // }


    return 0;
}
