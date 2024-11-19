#include <iostream>
#include <stdio.h>
using namespace std;

int jumlah, kurang, kali;
float bagi;
int pertama, kedua;
int *a = &pertama;
int *b = &kedua;
int *j = &jumlah;
int *ku = &kurang;
int *ka = &kali;
float *ba = &bagi;

void input()
{
    printf("Masukkan angka pertama: ");
    cin >> *a;

    do
    {
        printf("\nMasukkan angka kedua: ");
        cin >> *b;
        if (*b == 0)
            printf("Nilai pembagi tidak boleh = 0");
    } while (*b == 0);
}

void calculate()
{
    *j = *a + *b;
    *ku = *a - *b;
    *ka = *a * *b;
    *ba = *a / *b;
}

void display()
{
    printf("\nHasil Penjumlahan: %d\n", *j);
    printf("Hasil Pengurangan: %d\n", *ku);
    printf("Hasil Perkalian: %d\n", *ka);
    cout << "Hasil Pembagian: " << *ba;
}
main()
{
    input();
    calculate();
    display();
    return 0;
}