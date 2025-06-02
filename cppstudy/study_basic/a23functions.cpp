#include <iostream>

using namespace std;

void hellopCPP(int name, int poll);

int main23(){
    int time1, time2;
    cout << "첫번째 수 입력\n";
    cin >> time1;
    cout << "두번쨰 수 입력\n";
    cin >> time2;
    hellopCPP(time1, time2);
    return 0;
}

void hellopCPP(int a, int b){
    for(int i = 0;i<a;i++){
        cout << "Hello\n";
    }
    for(int i = 0;i<b;i++){
        cout << "C++\n";
    }
}