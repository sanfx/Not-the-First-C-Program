// main.c
#include <stdio.h>
#include "add.h" // include our own header file as well.
#include "tools.h"

int main() {
    int sum = add(5, 10); // Function call
    printf("Sum = %d\n", sum);
    int mult = multiply(3 ,4);
    printf("Multiplied = %d\n", mult);

    char de = dumbEncrypt('B');
    printf("Dumb encrypt: %c\n" , de);

    return 0;
}


int add(int a, int b) { // Function defination
    return a + b;
}
