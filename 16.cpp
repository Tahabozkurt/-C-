//
//  main.cpp
//  C++
//
//  Created by Taha Bozkurt on 24.02.2024.
//
#include <iostream>
using namespace std;

class Araba {
public:
    string marka;
    string model;
    int uretimYili;
};

int main() {
    Araba araba;

    araba.marka = "Renault";
    araba.model = "Clio";
    araba.uretimYili = 2015;

    cout << "Araba markasi: " << araba.marka << endl;
    cout << "Araba modeli: " << araba.model << endl;
    cout << "Uretim yili: " << araba.uretimYili << endl;

    return 0;
}
