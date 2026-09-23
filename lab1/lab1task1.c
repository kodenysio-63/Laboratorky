#include <stdio.h>

int main() {
    float x = -10.0f;
    float y;

    if (x >= 8.0f) {
        if (x < 23.0f) {
            y = -5.0f * x * x * x + 10.0f;
            printf("%f = %f\n", x, y);
        } else {
            printf("Функція не визначена для x = %f\n", x);
        }
    } else if (x < -19.0f) {
        y = 2.0f * x * x * x + 8.0f * x * x;
        printf("%f = %f\n", x, y);
    } else if (x > -3.0f) {
        if (x <= 0.0f) {
            y = 2.0f * x * x * x + 8.0f * x * x;
            printf("%f = %f\n", x, y);
        } else {
            printf("Функція не визначена для x = %f\n", x);
        }
    } else {
        printf("Функція не визначена для x = %f\n", x);
    }


    return 0;
}