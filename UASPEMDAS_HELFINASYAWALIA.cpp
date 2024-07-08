// UASPEMDAS_HELFINASYAWALIA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class MasukUniversitas {
private:
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;

public:
    MasukUniversitas() {
        uangPendaftaran = 0;
        uangSemesterPertama = 0;
        uangBangunan = 0;
        totalBiaya = 0;
    }

    virtual void namaJalurMasuk() = 0;
    virtual void input() = 0;
    virtual void hitungTotalBiaya() = 0;
    virtual void tampilkanTotalBiaya() = 0;

    void setUangPendaftaran(int nilai) {
        uangPendaftaran = nilai;
    }

    int getUangPendaftaran() {
        return uangPendaftaran;
    }

    void setUangSemesterPertama(int nilai) {
        uangSemesterPertama = nilai;
    }

    int getUangSemesterPertama() {
        return uangSemesterPertama;
    }

    void setUangBangunan(int nilai) {
        uangBangunan = nilai;
    }

    int getUangBangunan() {
        return uangBangunan;
    }
};

class SNBT : public MasukUniversitas {
public:
    void namaJalurMasuk() {
        cout << "Jalur Masuk: SNBT" << endl;
    }

    void input() {
        cout << "Masukkan uang pendaftaran: ";
        cin >> uangPendaftaran;
        cout << "Masukkan uang semester pertama: ";
        cin >> uangSemesterPertama;
        cout << "Masukkan uang bangunan: ";
        cin >> uangBangunan;
    }

    void hitungTotalBiaya() {
        totalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan;
    }

    void tampilkanTotalBiaya() {
        cout << "Total Biaya: " << totalBiaya << endl;
        if (totalBiaya > 500000000) {
            cout << "Kategori: Mahal\nRekomendasi: Tidak Direkomendasikan" << endl;
        }
        else if (totalBiaya > 20000000) {
            cout << "Kategori: Sedang\nRekomendasi: Dipertimbangkan" << endl;
        }
        else {
            cout << "Kategori: Murah\nRekomendasi: Direkomendasikan" << endl;
        }
    }
};

class SNBP : public MasukUniversitas {
public:
    void namaJalurMasuk() {
        cout << "Jalur Masuk: SNBP" << endl;
    }

    void input() {
        cout << "Masukkan uang pendaftaran: ";
        cin >> uangPendaftaran;
        cout << "Masukkan uang semester pertama: ";
        cin >> uangSemesterPertama;
    }

    void hitungTotalBiaya() {
        totalBiaya = uangPendaftaran + uangSemesterPertama;
    }

    void tampilkanTotalBiaya() {
        cout << "Total Biaya: " << totalBiaya << endl;
        if (totalBiaya > 10000000) {
            cout << "Kategori: Mahal\nRekomendasi: Tidak Direkomendasikan" << endl;
        }
        else if (totalBiaya > 20000000) {
            cout << "Kategori: Sedang\nRekomendasi: Dipertimbangkan" << endl;
        }
        else {
            cout << "Kategori: Murah\nRekomendasi: Direkomendasikan" << endl;
        }
    }
};

int main() {
    int pilihan;
    MasukUniversitas* jalurMasuk;

    while (true) {
        cout << "Pilih Jalur Masuk:\n1. SNBT\n2. SNBP\n3. Keluar\nPilih: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            jalurMasuk = new SNBT();
            jalurMasuk->namaJalurMasuk();
            jalurMasuk->input();
            jalurMasuk->hitungTotalBiaya();
            jalurMasuk->tampilkanTotalBiaya();
            delete jalurMasuk;
            break;
        case 2:
            jalurMasuk = new SNBP();
            jalurMasuk->namaJalurMasuk();
            jalurMasuk->input();
            jalurMasuk->hitungTotalBiaya();
            jalurMasuk->tampilkanTotalBiaya();
            delete jalurMasuk;
            break;
        case 3:
            return 0;
        default:
            cout << "Pilihan unvalid." << endl;
        }
    }

    return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
