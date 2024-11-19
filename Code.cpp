#include <iostream>

#include <stdio.h>

using namespace std;



int x,y;

int* a = &x;

int* b = &y;



void swap(int* a, int* b){

    int temp = *a;

    *a = *b;

    *b = temp;

}

main() {

    cin>>x>> y;

    printf("Sebelum swap: x = %d, y = %d\n",x,y);

    swap(x,y);

    printf("Setelah swap: x = %d, y = %d",x, y);

    return 0;

}
