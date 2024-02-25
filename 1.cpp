//
//  main.cpp
//  C++
//
//  Created by Taha Bozkurt on 24.02.2024.
//

#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, num4;
    cout << "Lütfen dört sayıyı virgülle veya boşlukla ayırarak giriniz: ";
    cin >> num1 >> num2 >> num3 >> num4;

    float sum = num1 + num2;
    float different = num3 - num4;
    float result = sum * different;

    cout << "Sonuç: " << result;

    return 0;
}
