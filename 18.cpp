//
//  main.cpp
//  C++
//
//  Created by Taha Bozkurt on 24.02.2024.
//
#include <iostream>
using namespace std;

class Dikdortgen {
public:
    double uzunluk;
    double genislik;

    double alanHesapla() {
        return uzunluk * genislik;
    }

    double cevreHesapla() {
        return 2 * (uzunluk + genislik);
    }
};

int main() {
    Dikdortgen dikdortgen1;

    dikdortgen1.uzunluk = 5.0;
    dikdortgen1.genislik = 3.0;

    cout << "Dikdortgenin alani: " << dikdortgen1.alanHesapla() << endl;

    cout << "Dikdortgenin cevresi: " << dikdortgen1.cevreHesapla() << endl;

    return 0;
}
