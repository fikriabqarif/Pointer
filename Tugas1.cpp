#include <iostream>
using namespace std;

int main()
{
    string tulisan = "Praktikum Pemprograman";
    string *tu = &tulisan;
    cout << *tu;
}