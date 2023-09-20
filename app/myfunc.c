
#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"
#include <math.h>

int myfunc(int b) {
    char *buffer = malloc(sizeof(char) * 1000);
    buffer [0] = b + 4;
    // здесь должен ругаться sonarcloud, т.к. утечка памяти
    return buffer[0];
}

int square(double a, double b, double c) {
    double D = 1;
    double x1 = 1;
    double x2 = 1;

    a = 2;
    b = 1;
    c = 5;

    D = b * b - 4 * a * c;

    if (D < 0) {
        printf("no roots");
    }
    
    if (D = 0) {
        x1 = -b / (2 * a);
        printf("%lf", x1);
    }

    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("%lf", x1);
        printf("%lf", x2);
    }
}

int val;

int fibonachi(int num) {
    int prev = 1;
    int next = 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num) {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}

void printStdoutMessages() {
    printf("This is a test message from myfunc.c\n");
    printf("Do not disturb\n");
}
