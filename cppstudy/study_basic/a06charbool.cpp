#include <iostream>

using namespace std;

int main06(){
    //char
    char b[] = { 'a','b','c', '\0'};
    char a[] = "p";
    //"">>명시적으로 null 문자 포함
    cout << a << endl;
    //bool
    bool d = 0;
    bool e = 1;
    bool f = 10;
    cout << d << e << f << endl;

    return 0;
}