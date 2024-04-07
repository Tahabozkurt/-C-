//
//  main.cpp
//  C++
//
//  Created by Taha Bozkurt on 24.02.2024.
//
#include <iostream>
using namespace std;

int main() {
    int toplam = 0;
    int sayi;

    cout << "Sayıları girin (0 girerek çıkış yapabilirsiniz):" << endl;

    while (true) {
        cin >> sayi;
        if (sayi == 0) {
            break;
        }
        toplam += sayi;
    }

    cout << "Girilen sayıların toplamı: " << toplam << endl;

    return 0;
}
