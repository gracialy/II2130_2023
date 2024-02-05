#include <stdio.h>
#include <stdlib.h>

int main() {
    int* numbers = (int*) (malloc(10
    *(sizeof(int))));
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        scanf("f", &(numbers[i]));
        sum += numbers[i];
    }

    int min = numbers[0];
    int max = numbers[0];

    for (int i = 1; i < 10; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    double midRange = (double)(min + max) / 2.0;

    printf("%f\n", midRange);

    return 0;
}
