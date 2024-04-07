//
//  main.cpp
//  C++
//
//  Created by Taha Bozkurt on 24.02.2024.
//
#include <iostream>
using namespace std;

int main() {
    int sayi;
    int toplam = 0;
    int girilenSayiAdedi = 0;
    double ortalama;

    cout << "Sayıları girin (sonucu görmek için '.' girin):" << endl;
    

    while (true) {
        cout << "Sayı girin: ";
        cin >> sayi;

        if (sayi == .) {
            break;
        }

        if (sayi % 2 == 0) {
            toplam += sayi;
            girilenSayiAdedi++;
        }
    }

    if (girilenSayiAdedi > 0) {
        ortalama = static_cast<double>(toplam) / girilenSayiAdedi;
        cout << "Girilen çift sayıların toplamı: " << toplam << endl;
        cout << "Girilen çift sayıların ortalaması: " << ortalama << endl;
    } else {
        cout << "Hiç çift sayı girilmedi." << endl;
    }

    return 0;
}
