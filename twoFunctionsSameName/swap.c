// **************************
// Program to swap two values
// Wrote in Plain C
//
// **************************

#include <stdio.h>

void swap(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

void double_swap(double *i, double *j) {
    double temp = *i;
    *i = *j;
    *j = temp;
}

int main() {
    int i, j;
    double k, l;

    i = 2;
    j = 3;
    k = 1.5;
    l = 4.6;

    printf("i = %2d, j = %2d\n", i, j);
    printf("k = %4.2f, l = %4.2f\n", k, l);
    printf("----->>> Swapping\n");
    swap(&i, &j);
    double_swap(&k, &l);
    printf("i = %2d, j = %2d\n", i, j);
    printf("k = %4.2f, l = %4.2f\n", k, l);    
}
