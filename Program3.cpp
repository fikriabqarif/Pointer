#include <iostream>
#include <stdio.h>
using namespace std;

int r,q = 8;
int spesial(int *,int *);

main() {
    int* ptr1 = &q;
    int* ptr2 = &q;
    r = spesial(ptr2, ptr1); //ubah go_crazy jadi spesial
    printf("q = %d, r = %d, *ptr1 = %d, *ptr2 = %d\n", q, r, *ptr1, *ptr2);
    ptr1 = &r;
    spesial(ptr1, ptr2);
    printf("q = %d, r= %d, *ptr1 = %d, ptr2 = %d\n", q, r, *ptr1, *ptr2);
}

int spesial(int *p1, int *p2)
{
    int x=5;
    r=12;
    *p2 = *p1 *2;
    p1 = &x;
    return *p1 * 3;
}