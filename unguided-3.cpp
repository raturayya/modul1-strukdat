#include <iostream>
#include <map>
using namespace std;

int main() {

    cout << "Nama: Balqies L Ratu Rayya" << endl;
    cout << "NIM : 2311102313" << endl;

    // Membuat map dengan key bertipe string dan value bertipe int
    map<string, int> data;

    // Menambahkan data ke dalam map
    data["John"] = 25;
    data["Alice"] = 30;
    data["Bob"] = 28;
    data["Eva"] = 32; // Menambahkan data baru

    // Mengakses dan menampilkan data dari map
    cout << "Usia John: " << data["John"] << endl;
    cout << "Usia Alice: " << data["Alice"] << endl;
    cout << "Usia Bob: " << data["Bob"] << endl;
    cout << "Usia Eva: " << data["Eva"] << endl; // Menampilkan usia Eva

    return 0;
}
