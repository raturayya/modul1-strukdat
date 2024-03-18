#include <iostream>
using namespace std;

// Fungsi untuk menghitung luas persegi
int hitungLuas(int sisi) {
    return sisi * sisi;
}

// Fungsi untuk menghitung keliling persegi
int hitungKeliling(int sisi) {
    return 4 * sisi;
}

int main() {

    cout << "Nama: Balqies L Ratu Rayya" << endl;
    cout << "NIM : 2311102313" << endl;
    
    int sisi;
    // Menerima input dari pengguna
    cout << "Masukkan panjang sisi: ";
    cin >> sisi;

    // Memanggil fungsi hitungLuas dan menampilkan hasilnya
    cout << "Luas persegi dengan sisi " << sisi << " adalah: " << hitungLuas(sisi) << endl;

    // Memanggil fungsi hitungKeliling dan menampilkan hasilnya
    cout << "Keliling persegi dengan sisi " << sisi << " adalah: " << hitungKeliling(sisi) << endl;

    return 0;
}
