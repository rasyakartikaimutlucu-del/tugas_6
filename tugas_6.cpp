
#include <iostream>
using namespace std;

int main() {
    int tujuan, jumlah, harga, total;

    cout << "===== PEMESANAN TIKET BUS =====" << endl;
    cout << "1. Malang - Surabaya : Rp35000" << endl;
    cout << "2. Malang - Pasuruan : Rp20000" << endl;
    cout << "3. Malang - Jombang  : Rp25000" << endl;

    cout << "Pilih tujuan: ";
    cin >> tujuan;

    cout << "Jumlah penumpang: ";
    cin >> jumlah;

    if (tujuan == 1) {
        harga = 35000;
        cout << "Tujuan: Malang - Surabaya";
    }
    else if (tujuan == 2) {
        harga = 20000;
        cout << "Tujuan: Malang - Pasuruan";
    }
    else if (tujuan == 3) {
        harga = 25000;
        cout << "Tujuan: Malang - Jombang";
    }
    else {
        cout << "Tujuan tidak tersedia";
        return 0;
    }

    total = harga * jumlah;

    cout << "Harga tiket: Rp" << harga;
    cout << "Jumlah penumpang: " << jumlah;
    cout << "Total pembayaran: Rp" << total;

    cout << "Terima kasih telah memean tiket";

    return 0;
}
