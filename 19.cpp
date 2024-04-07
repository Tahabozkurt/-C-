//
//  main.cpp
//  C++
//
//  Created by Taha Bozkurt on 24.02.2024.
//
#include <iostream>
#include <string>
using namespace std;

class Urun {
public:
    string ad;
    double fiyat;

    void urunBilgisiGoster() {
        cout << "Ürün adı: " << ad << endl;
        cout << "Fiyatı: $" << fiyat << endl;
    }

    void fiyatDegistir(double yeniFiyat) {
        fiyat = yeniFiyat;
        cout << ad << " adlı ürünün fiyatı güncellendi." << endl;
    }
};

int main() {
    Urun urun1;

    urun1.ad = "Bilgisayar";
    urun1.fiyat = 2500.0;

    cout << "Ürün bilgileri:" << endl;
    urun1.urunBilgisiGoster();

    urun1.fiyatDegistir(2700.0);

    cout << "\nGüncellenmiş ürün bilgileri:" << endl;
    urun1.urunBilgisiGoster();

    return 0;
}
