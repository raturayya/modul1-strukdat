// #include <iostream>
// using namespace std;

// // Struct untuk merepresentasikan data mahasiswa
// struct Mahasiswa {
//     string nama;
//     int usia;
//     string jurusan;
// };

// int main() {

//     cout << "Nama: Balqies L Ratu Rayya" << endl;
//     cout << "NIM : 2311102313" << endl;

//     // Membuat objek dari struct Mahasiswa
//     Mahasiswa mhs1;

//     // Mengisi data ke objek mhs1
//     mhs1.nama = "John";
//     mhs1.usia = 20;
//     mhs1.jurusan = "Informatika";

//     // Menampilkan informasi mahasiswa
//     cout << "Nama: " << mhs1.nama << endl;
//     cout << "Usia: " << mhs1.usia << endl;
//     cout << "Jurusan: " << mhs1.jurusan << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

// Class untuk merepresentasikan data mahasiswa
class Mahasiswa {
private:
    string nama;
    int usia;
    string jurusan;

public:
    // Constructor untuk inisialisasi objek
    Mahasiswa(string nm, int u, string jur) {
        nama = nm;
        usia = u;
        jurusan = jur;
    }

    // Metode untuk menampilkan informasi mahasiswa
    void tampilkanInfo() {
        cout << "Nama: " << nama << endl;
        cout << "Usia: " << usia << endl;
        cout << "Jurusan: " << jurusan << endl;
    }
};

int main() {

    cout << "Nama: Balqies L Ratu Rayya" << endl;
    cout << "NIM : 2311102313" << endl;

    // Membuat objek dari class Mahasiswa dan menginisialisasi dengan constructor
    Mahasiswa mhs1("John", 20, "Informatika");

    // Memanggil metode untuk menampilkan informasi mahasiswa
    mhs1.tampilkanInfo();

    return 0;
}


