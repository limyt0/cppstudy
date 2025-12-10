#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n = "Alice", int a = 18) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main1209() {
    Person p1; //기본값 사용
    Person p2("Bob", 30); //값 지정
    p1.display();
    p2.display();
    return 0;
}