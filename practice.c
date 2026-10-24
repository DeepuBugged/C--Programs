#include <stdio.h>

//calculate the sum of two numbers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int result = sum(5, 3);
    printf("The sum is: %d\n", result);
    return 0;
}