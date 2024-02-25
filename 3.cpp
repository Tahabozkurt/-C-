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
  cout << "1.sayıyı giriniz: ";
  cin >> num1;
  cout << "2.sayıyı giriniz: ";
  cin >> num2;
  cout << "3.sayıyı giriniz: ";
  cin >> num3;
  cout << "4.sayıyı giriniz: ";
  cin >> num4;

  float sum = num1 + num2;
  float difference = num3 - num4;
  float result = sum * difference;

  cout << "result: " << result;

  return 0;
}
