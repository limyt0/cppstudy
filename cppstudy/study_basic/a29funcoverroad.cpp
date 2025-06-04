#include <iostream>

using namespace std;

int sum(int, int);
float sum(float, float);

int main29(){

    cout<< "정수 2개 입력\n";
    int a, b;
    cin >> a >> b ;
    cout << "실수 두개 입력\n";
    float c,d;
    cin >> c >>  d;
    cout << " 정수 합: " << sum(a,b) << "\n";
    cout << "실수 합: " << sum(c,d) << "\n";
    return 0;
}

int sum(int a, int b){
    return a+b;
}

float sum(float a, float b){
    return a+b;
}