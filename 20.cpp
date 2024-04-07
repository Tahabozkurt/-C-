//
//  main.cpp
//  C++
//
//  Created by Taha Bozkurt on 24.02.2024.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    int faktoriyel = 1;

    cout << "Faktöriyelini hesaplamak istediğiniz bir sayı girin: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        faktoriyel *= i;
        i++;
    }

    cout << "Faktöriyel: " << faktoriyel << endl;

    return 0;
}
