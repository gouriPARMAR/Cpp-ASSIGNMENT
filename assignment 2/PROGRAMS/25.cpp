// Write a program to illustrate the concept of function pointers and callback functions. 
#include <stdio.h>
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int operate(int a, int b, int (*operation)(int, int)) {
    return operation(a, b);
}

int main() {
    int num1 = 10;
    int num2 = 5;
    int result;

    // Declare a function pointer
    int (*func_ptr)(int, int);

    func_ptr = add;
    result = func_ptr(num1, num2);
    printf("Addition: %d\n", result); // Output: Addition: 15

    func_ptr = subtract;
    result = func_ptr(num1, num2);
    printf("Subtraction: %d\n", result); // Output: Subtraction: 5

    result = operate(num1, num2, add);
    printf("Operation (Addition): %d\n", result); // Output: Operation (Addition): 15

    result = operate(num1, num2, subtract);
    printf("Operation (Subtraction): %d\n", result); // Output: Operation (Subtraction): 5

    return 0;
}