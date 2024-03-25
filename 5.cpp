//
//  main.cpp
//  C++
//
//  Created by Taha Bozkurt on 24.02.2024.
//

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    

    for (int i = 1; i <= 5; ++i) {
        int toplam = 0;
        for (int j = 1; j <= i;++j) {
            cout << j;
            toplam += j;
            if (j < i) {
                cout << "+";
            }
        }
        cout << " = " << toplam << endl;
    }

    return 0;
}

    
