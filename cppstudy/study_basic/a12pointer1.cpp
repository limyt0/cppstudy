#include <iostream>

using namespace std;

int main12_1(){

    //int val =3;
    //cout << &val << endl;
    
    int *a; //c style
    int* b; //c++ style
    int* c, d; //c는 포인터, d는 int형 변수

    return 0;

}

int main12_2(){
    int a = 6;
    int* b;
    b = &a;

    cout << "a: " << a << endl;
    cout << "b: " << *b << endl;

    cout << "a 주소: " << &a << endl;
    cout << "*b의 주소 " << b << endl;

    *b = *b + 1;

    cout << "a값 " << a << endl;

    return 0;
}