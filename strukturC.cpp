#include <iostream>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    string umur;
}
int main(){
    Mahasiswa mhs;
    cout << "20220140158 : ";
    cin >> mhs.nim;
    cout << "Iqbal Dwi Fathonah : ";
    cin >> mhs.nama;
    cout << "Kalteng : ";
    cin >> mhs.alamat;
    cout << "18 : ";
    cin >> mhs.umur;

    cout <<endl;
    cout <<"\n NIM : "<< mhs.nim;
    cout <<"\n Nama : "<< mhs.nama;
    cout <<"\n Alamat : "<< mhs.alamat;
    cout <<\"\n Umur : "<< mhs.umur;
}


