#include <iostream>

using namespace std;

int main11Union(){
    //공용체(union)
    //서로 다른 데이터형 한번에 한가지만 보관 가능
    union MyUnion{
        int intVal;
        long longVal;
        float floatVal;
    };
    MyUnion test;
    test.intVal = 3;
    cout << test.intVal << endl;
    test.longVal = 33;
    cout << test.intVal << endl;
    cout << test.longVal << endl;
    test.floatVal = 3.3;
    cout << test.intVal << endl;
    cout << test.longVal << endl;
    cout << test.floatVal << endl;

    return 0;
}

int mainenum(){
    //열거체 enum
    enum sepctrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};
    
    sepctrum a = orange;
    cout << a << endl;
    int b;
    b = blue;
    b = blue + 3;
    cout << b << endl;
    return 0;
}