#include <stdio.h>

float calculate(float a, float b, char operator) {

    switch (operator) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            fprintf(stderr, "Invalid operator\n");
        return 0.0;
    }
}

int main(void) {
    float a, b;
    char operator;
    scanf("%f %c %f", &a, &operator, &b);
    printf("%f \n", calculate(a, b, operator));
    return 0;
}
