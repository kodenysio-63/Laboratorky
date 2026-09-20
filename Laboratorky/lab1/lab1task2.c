#include <stdio.h>

int main() {
    float x = -2.0f;
    float y;

    if (x >= 8.0f && x < 23.0f) {
        y = -5.0f * x * x * x + 10.0f;
        printf("%f = %f\n", x, y);
    } else if (x < -19.0f || (x > -3.0f && x <= 0.0f)) {
        y = 2.0f * x * x + 8.0f * x * x;
        printf("%f = %f\n", x, y);
    } else {
        printf("Функція не визначена для x = %f\n", x);
    }
    return 0;
}