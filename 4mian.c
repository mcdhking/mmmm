
#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;
    scanf("%f %c %f", &num1, &op, &num2);

    if (op == '+') {
        result = num1 + num2;
        printf("%.2f\n", result);
    } 
    else if (op == '-') {
        result = num1 - num2;
        printf("%.2f\n", result);
    }
    else if (op == '*') {
        result = num1 * num2;
        printf("%.2f\n", result);
    }
    else if (op == '/') {
        if (num2 == 0) {
            printf("除数不能为零\n");
        } else {
            result = num1 / num2;
            printf("%.2f\n", result);
        }
    } 
    else {
        printf("输入无效\n");
    }