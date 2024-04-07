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
    for (int i = 1; i <= 100; i++) {
        toplam += i;
    }
    cout << "1'den 100'e toplam: " << toplam << endl;
    return 0;
}
