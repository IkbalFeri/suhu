#include <iostream>
using namespace std;


const double FAKTOR_C_TO_F = 9.0 / 5.0;
const double FAKTOR_C_TO_R = 4.0 / 5.0;
const double OFFSET_C_TO_K = 273.0;

double konversiCKeF(double nilai);
double konversiCKeR(double nilai);
double konversiCKeK(double nilai);
double konversiFKeC(double nilai);
double konversiFKeR(double nilai);
double konversiFKeK(double nilai);
double konversiRKeC(double nilai);
double konversiRKeF(double nilai);
double konversiRKeK(double nilai);
double konversiKKeC(double nilai);
double konversiKKeR(double nilai);
double konversiKKeF(double nilai);
void konversiSuhu(char skalaAwal, char skalaAkhir, double nilai);


int main() {
    double nilai;
    char skalaAwal, skalaAkhir; 

    cout << "Selamat datang di program konversi suhu!" << endl;
    cout << "Masukkan skala suhu awal (c, f, r, k): ";
    cin >> skalaAwal;
    cout << "Masukkan skala suhu yang diinginkan (c, f, r, k): ";
    cin >> skalaAkhir; 
    cout << "Masukkan nilai suhu yang ingin dikonversi: ";
    cin >> nilai;

    konversiSuhu(skalaAwal, skalaAkhir, nilai);
    
    return 0;    
}



