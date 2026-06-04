#include <iostream>
using namespace std;

// Abstract Base Class
class RekeningBank {
protected:
    string namaNasabah;
    double saldo;

public:
    RekeningBank(string nama, double s) {
        namaNasabah = nama;
        saldo = s;
    }

    virtual void potongAdmin() = 0;

    void tampilkanSaldo() {
        cout << "Nama Nasabah : " << namaNasabah << endl;
        cout << "Saldo Akhir  : Rp " << saldo << endl;
        cout << "-----------------------------" << endl;
    }
};

// Class Rekening Syariah
class RekeningSyariah : public RekeningBank {
public:
    RekeningSyariah(string nama, double s)
        : RekeningBank(nama, s) {}

    void potongAdmin() override {
        cout << "Rekening Syariah bebas biaya admin." << endl;
    }
};

// Class Rekening Konvensional
class RekeningKonvensional : public RekeningBank {
public:
    RekeningKonvensional(string nama, double s)
        : RekeningBank(nama, s) {}

    void potongAdmin() override {
        saldo -= 15000;
        cout << "Biaya admin Rp 15.000 telah dipotong." << endl;
    }
};

// Class Rekening Premium
class RekeningPremium : public RekeningBank {
public:
    RekeningPremium(string nama, double s)
        : RekeningBank(nama, s) {}

    void potongAdmin() override {
        if (saldo > 10000000) {
            cout << "Saldo di atas Rp 10.000.000, bebas biaya admin." << endl;
        } else {
            saldo -= 50000;
            cout << "Biaya admin Rp 50.000 telah dipotong." << endl;
        }
    }
};

int main() {

    // Pointer abstract class
    RekeningBank* rekening1;
    RekeningBank* rekening2;
    RekeningBank* rekening3;

    // Object masing-masing rekening
    RekeningSyariah syariah("Andi", 5000000);
    RekeningKonvensional konvensional("Budi", 7000000);
    RekeningPremium premium("Citra", 9000000);

    // Rekening Syariah
    rekening1 = &syariah;
    rekening1->potongAdmin();
    rekening1->tampilkanSaldo();

    // Rekening Konvensional
    rekening2 = &konvensional;
    rekening2->potongAdmin();
    rekening2->tampilkanSaldo();

    // Rekening Premium
    rekening3 = &premium;
    rekening3->potongAdmin();
    rekening3->tampilkanSaldo();

    return 0;
}