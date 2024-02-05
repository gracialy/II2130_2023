#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len) {
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer)&x, sizeof(void *));
}

void test_show_bytes(int val) {
    int ival = val;
    float fval = (float)ival;
    int *pval = &ival;
    printf("Value Type Bytes ordering (hex)\n");
    printf("%d Int:   ", val);
    show_int(ival);
    printf("%.1f Float: ", fval);
    show_float(fval);
    printf("&ival Int*: ");
    show_pointer(pval);
}

int main() {
    int val = 0x12345678;
    byte_pointer valp = (byte_pointer) &val;
    show_bytes(valp, 1); /* A. */
    show_bytes(valp, 2); /* B. */
    show_bytes(valp, 3); /* C. */
    return 0;
}
