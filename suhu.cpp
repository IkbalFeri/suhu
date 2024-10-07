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
void konversiSuhu(char skalaAwal, char skalaAkhir, double nilai) {
    double hasil;

    if (skalaAwal == 'c') {
        if (skalaAkhir == 'f') hasil = konversiCKeF(nilai);
        else if (skalaAkhir == 'r') hasil = konversiCKeR(nilai);
        else if (skalaAkhir == 'k') hasil = konversiCKeK(nilai);
    } 
    else if (skalaAwal == 'f') {
        if (skalaAkhir == 'c') hasil = konversiFKeC(nilai);
        else if (skalaAkhir == 'r') hasil = konversiFKeR(nilai);
        else if (skalaAkhir == 'k') hasil = konversiFKeK(nilai);
    } 
    else if (skalaAwal == 'r') {
        if (skalaAkhir == 'c') hasil = konversiRKeC(nilai);
        else if (skalaAkhir == 'f') hasil = konversiRKeF(nilai);
        else if (skalaAkhir == 'k') hasil = konversiRKeK(nilai);
    } 
    else if (skalaAwal == 'k') {
        if (skalaAkhir == 'c') hasil = konversiKKeC(nilai);
        else if (skalaAkhir == 'r') hasil = konversiKKeR(nilai);
        else if (skalaAkhir == 'f') hasil = konversiKKeF(nilai);
    } 
    
