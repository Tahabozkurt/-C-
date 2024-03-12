//
//  main.cpp
//  C++
//
//  Created by Taha Bozkurt on 24.02.2024.
//

#include <iostream>

using namespace std;

float paralelKenarCevresi(float a, float b) {
    return 2 * (a + b);
}

float paralelKenarAlani(float a, float b) {
    return a * b;
}

int main() {
    float a, b;

    cout << "Paralel kenarın ilk kenar uzunluğunu girin: ";
    cin >> a;
    cout << "Paralel kenarın ikinci kenar uzunluğunu girin: ";
    cin >> b;

    cout << "Paralel kenarın çevresi: " << paralelKenarCevresi(a, b) << endl;
    cout << "Paralel kenarın alanı: " << paralelKenarAlani(a, b) << endl;

    return 0;
}
