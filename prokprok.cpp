#include <iostream>
#include <string>

using namespace std;

// 1. Prosedur untuk input data
// Menggunakan '&' supaya nilai berat & tinggi yang diisi di sini bisa terbaca di main
void masukanData(float &berat, float &tinggi) {
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}
