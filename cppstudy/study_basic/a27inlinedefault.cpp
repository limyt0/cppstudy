#include <iostream>

using namespace std;

inline float square(float x) {return x * x;}

int main27(){
    int a = 5;
    cout << "한변 : " << a << "인 정사각형 넓이" << endl;
    float b = square(a);
    cout << b << endl;
    return 0;
}
