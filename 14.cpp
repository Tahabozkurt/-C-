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
    int result = 1;

    cout << "Numbers: ";
    while (i <= 5) {
        cout << i << " ";
        result *= i;
        i++;
    }

    cout << "Result: " << result << endl;

    return 0;
}
