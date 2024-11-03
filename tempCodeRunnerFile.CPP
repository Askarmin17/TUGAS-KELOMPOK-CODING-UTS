#include <iostream>
using namespace std;

int main() {
    string nama;
    int gaji, golongan, jamkerja, uanglembur, totalgaji;

    cout << "Masukkan nama anda: ";
    cin >> nama;

    cout << "Masukkan golongan anda: ";
    cin >> golongan;

    cout << "Masukkan jam kerja per minggu: ";
    cin >> jamkerja;

   if (golongan == 2) {
        gaji = jamkerja * 35000;
    } else if (golongan == 3) {
        gaji = jamkerja * 50000;
    } else {
        cout << "Golongan tidak valid." << endl;
        return 1; 
    }

    if (jamkerja > 48) {
        uanglembur = (jamkerja - 48) * 10000;
    } else {
        uanglembur = 0;
    }


   
    totalgaji=gaji+uanglembur;
    cout<< endl;
    cout << "Total Gaji " << nama << " per minggu: " << totalgaji << endl;

    return 0;
}