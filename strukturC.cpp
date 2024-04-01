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


