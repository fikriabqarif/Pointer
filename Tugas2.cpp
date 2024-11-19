#include <iostream>
using namespace std;

int main() {
    char kata[] = "Gadjah Mada";
    char* ptr = kata;

    cout << "Kata: " << ptr << endl;
    cout << "Huruf keempat: " << *(ptr + 3) << endl;
    
    return 0;
}