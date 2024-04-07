//
//  main.cpp
//  C++
//
//  Created by Taha Bozkurt on 24.02.2024.
//
#include <iostream>
using namespace std;

class Ogrenci {
public:
    string ad;
    string soyad;
    int yas;
    double notOrtalamasi;
};

int main() {
    Ogrenci ogrenci;

    ogrenci.ad = "Sevvall";
    ogrenci.soyad = "Ağgül";
    ogrenci.yas = 20;
    ogrenci.notOrtalamasi = 97.9;

    cout << "Öğrenci adı: " << ogrenci.ad << endl;
    cout << "Öğrenci soyadı: " << ogrenci.soyad << endl;
    cout << "Yaş: " << ogrenci.yas << endl;
    cout << "Not ortalaması: " << ogrenci.notOrtalamasi << endl;

    return 0;
}
