//
//  main.cpp
//  C++
//
//  Created by Taha Bozkurt on 24.02.2024.
//
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int sum = 0;
    
    for (int i = 1; i <= n; i++) {
        sum += i * (i + 1) / 2;
        cout << "1";
        for (int j = 2; j <= i; j++) {
            cout << "+" << j;
        }
        cout << " = " << sum << endl;
    }
    
    cout << "\nSum is: " << sum << endl;

    return 0;
}
