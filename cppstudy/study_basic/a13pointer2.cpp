#include <iostream>

using namespace std;

int main13_01(){
    int a;
    int* b = &a;
    //new 연산자
    int* pointer = new int;
     //delete 연산자 메모리
    int* ps = new int;
    delete ps;

    /* delete 사용 규칙
     1. new로 대입하지 않은 메모리는 delete로 해제 불가
     2. 같은 메모리 블록을 연속2번 delete로 해제 불가
     3. new[]로 메모리 대입시 delete[]로 해제한다.
     4. 대괄호 사용하지 않으면 delete도 대괄호 사용하면 안 됨.
    */
    return 0;
}

int main13_02(){
    double* p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << ".\n";

    p3 = p3 + 1;

    cout << "Now p3[0] is " << p3[0] << " and ";

    cout << "p3[1] is " << p3[1] << ".\n";

    p3 = p3 -1;
    delete[] p3;

    return 0;
}