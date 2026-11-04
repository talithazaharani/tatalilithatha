#include <iostream>
using namespace std;

int main (){
    string panggilan;
    double umur;

    cout << "masukkan nama lengkap: ";
    getline(cin, panggilan);

    cout << "masukkan umur anda (angka): ";
    cin >> umur;

    cout << "hai...|| saya" << panggilan << endl;
    cout << "umur saya " << umur << " tahun" << " dengan nama " << panggilan << " imutt ";
    return 0;
}