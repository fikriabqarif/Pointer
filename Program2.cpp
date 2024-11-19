#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int count = 16, sum = 17, *x, *y;
    x = &sum;
    *x = 27; //ubah sum = 27
    y = x; //alamt y = sum
    x = &count; 
    sum = *x / 2 * 3; //16 / 2 *3
    printf("count = %d, sum = %d, *x = %d, *y = %d\n", count, sum, *x,*y);
    return 0;
}