#include <iostream>

using namespace std;

int main16_1(){

    for(int i = 0;i<5;i++){
        cout << i << "번째" << endl;
    }
    int a = 10;
    int b = 10;
    cout << a << endl;
    cout << a++ << endl;
    cout << ++b << endl;
    cout << "a는 " << a << ", b는 " << b << endl;

    return 0;
}

int main16_2(){

    for(int i = 5;i>0;i--){
        cout << i << "번째" << endl;
    }
    return 0;
}