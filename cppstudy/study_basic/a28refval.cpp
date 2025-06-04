#include <iostream>

using namespace std;

void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

int main28(){
    int w1 = 100;
    int w2 = 200;
    cout << "최초 상태: " << endl;
    cout << "w1: " << w1 << ", w2 = " << w2 << endl;

    cout << "참조로 전달\n";
    swapA(w1, w2);
    cout << "w1 = " << w1 << ", w2 = " << w2 << endl;
    
    cout << "포인터로 전달\n";
    swapB(&w1, &w2);
    cout << "w1 = " << w1 << ", w2 = " << w2 << endl;

    cout << "값으로 전달\n";
    swapC(w1, w2);
    cout << "w1 = " << w1 << ", w2 = " << w2 << endl;
    
    return 0;
}

//참조로 전달
void swapA(int& a, int& b){
    int temp;

    temp = a;
    a = b;
    b = temp;
}

//포인터로 전달
void swapB(int* a, int* b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

//값으로 전달
void swapC(int a, int b){
    int temp;

    temp = a;
    a = b;
    b = temp;
}