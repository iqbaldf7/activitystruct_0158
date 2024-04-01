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
    getline(cin, mhs.nim);
    cout << "Nama Mahasiswa : ";
    getline(cin,mhs.nama);

    cout << "Alamat Mahasiswa : "<<endl;
    cout << "\t Nama Desa : ";
    cin >> mhs.alamat.desa;
    cout << "\t Nama Kota : ";
    cin >> mhs.alamat.kota;
    cout << "Umur Mahasiswa : ";
    cin >>mhs.umur;

    cout << endl;
    cout << "\nNIM : " << mhs.nim;
    cout << "\nNama : " << mhs.nama;
    cout << "\nAlamat :";
    cout << "\n\tKota : " << mhs.alamat.kota;
    cout << "\n\tDesa : " << mhs.alamat.desa;
    cout << "\nUmur : " << mhs.umur;
};


