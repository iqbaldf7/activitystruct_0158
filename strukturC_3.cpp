#include <iostream>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
};

struct Mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main(){
    Mahasiswa ms;
    cout << "Nomor Mahasiswa : ";
    getline(cin,mhs.nama);
    cout << "Nama Mahasiswa : ";
    getline(cin,mhs.nama);

    cout << "Alamat Mahasiswa : "<<endl;
    cout << "\t Nama Desa : ";
    cin >> mhs.alamat.desa;
    cin >> mhs.alamat.dessa;
    cout << "\t Nama Kota : ";
    
