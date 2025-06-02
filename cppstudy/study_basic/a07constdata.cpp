#include <iostream>
//C 스타일에선 #define 사용. c++에서도 사용 가능. 
//#define PIE 3.1415926535

using namespace std;

int main0701(){
    //원 넓이 구하는 프로그램 
    //r * r * pi
    const float PIE = 3.1415926535;
    //바뀔필요없고, 바뀌어서도 안되는 수 = 상수
    int r = 3;

    float s = r * r * PIE;

    cout << s << endl;
    return 0;
}

int main0702(){
    //데이터형 변환
    int a = 3.141592;
    cout << a << endl;

    //강제적 데이터형 변환 
    char ch = 'M';
    //cout << (int)ch << " " << int(ch) << endl;
    //C++ 문법
    //static_cast<typeName>
    cout << static_cast<int>(ch) << endl;
    return 0;
}