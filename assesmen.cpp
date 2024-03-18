#include <iostream>
#include <string>

using namespace std;

int main() {
    string namaMahasiswa[5] = {"luna", "diana", "dodit", "rudi", "indah"};
    double nilaiMahasiswa[5] = {89.88, 65.33, 90.00, 100.0, 75.62};

    cout << "Nilai mahasiswa ke-3: " << nilaiMahasiswa[2] << endl;
    cout << "Nama mahasiswa ke-1: " << namaMahasiswa[0] << endl;

    double totalNilai = 0;
    for (int i = 0; i < 5; ++i) {
        totalNilai += nilaiMahasiswa[i];
    }
    cout << "Total nilai: " << totalNilai << endl;

    double rataRata = totalNilai / 5;
    cout << "Rata - rata = " << rataRata << endl;

    return 0;
}
