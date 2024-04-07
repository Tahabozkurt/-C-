//
//  main.cpp
//  C++
//
//  Created by Taha Bozkurt on 24.02.2024.
//
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Person person1("Taha", 21);

    cout << "Name: " << person1.getName() << endl;
    cout << "Age: " << person1.getAge() << endl;

    person1.setName("Enes");
    person1.setAge(30);

    cout << "Updated Name: " << person1.getName() << endl;
    cout << "Updated Age: " << person1.getAge() << endl;

    return 0;
}

