#include <iostream>
using namespace std;

int main(){
    float alas;
    float tinggi;

    cout << "masukkan alas: ";
    cin >> alas;

    cout << "masukkan tinggi: ";
    cin>> tinggi;

    float luas = 0.5 * alas * tinggi;
    cout << "luasnya adalah: " << luas;

    return 0;
}