#include <iostream>
using namespace std;


struct DetailAlamat{
    string kota;
    string desa;
};

struct Mahasiswa{
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};


int main (){
    Mahasiswa mhs [3];
    for (int i=0;i<3;i++){
        cout << "Data ke- " <<(i+1)<< ":" << endl;
        cout << "Nomor Induk Mahasiswa : ";
        getline(cin, mhs[i].nim);
        cout << "Nama Mahasiswa : ";
        getline(cin, mhs[i].nama);
