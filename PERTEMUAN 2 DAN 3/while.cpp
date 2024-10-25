#include <iostream>
using namespace std;

int main() {
    int nilai_awal, nilai_akhir;

    // Meminta input dari user untuk nilai nilai_awal dan nilai_akhir
    cout << "Masukkan nilai nilai_awal: ";
    cin >> nilai_awal;
    cout << "Masukkan nilai nilai_akhir: ";
    cin >> nilai_akhir;

    // Menggunakan perulangan while untuk mencetak dari a hingga b
    while (nilai_awal <= nilai_akhir) {
        cout << nilai_awal << " ";  // Menampilkan nilai a
        nilai_awal ++;               // Menambahkan a sebesar 1 setiap iterasi
    }

    return 0;
}