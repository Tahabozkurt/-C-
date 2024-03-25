//
//  main.cpp
//  C++
//
//  Created by Taha Bozkurt on 24.02.2024.
//
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int sum = 0;

    cout << "Dogal sayılar: ";
    while (i <= 7) {
        cout << i << " ";
        sum += i;
        i++;
    }

    cout << "\nSum: " << sum << endl;

    return 0;
}
