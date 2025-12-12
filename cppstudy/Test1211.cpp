#include <iostream>
using namespace std;

// TODO: Phone 클래스 구현
class Phone {
public:
    virtual void displayBrand() = 0;
    virtual void showFeature() = 0;

    virtual ~Phone() {};

};

class Samsung : public Phone {
public:
    void displayBrand() {
        cout << "Samsung" << endl;
    }
    void showFeature() {
        cout << "Galaxy S 시리즈" << endl;
    }
};

class Apple : public Phone {
public:
    void displayBrand() {
        cout << "Apple" << endl;
    }
    void showFeature() {
        cout << "iPhone Pro 시리즈" << endl;
    }
};

class Xiaomi : public Phone {
public:
    void displayBrand() {
        cout << "Xiaomi" << endl;
    }
    void showFeature() {
        cout << "Redmi Note 시리즈" << endl;
    }
};

int main1211() {

    Phone* phones[3] = { new Samsung, new Apple , new Xiaomi };


    for (int i = 0; i < 3; i++) {
        phones[i]->displayBrand();
        phones[i]->showFeature();
    }
    for (int i = 0; i < 3; i++) {
        delete phones[i];
    }
    return 0;
}