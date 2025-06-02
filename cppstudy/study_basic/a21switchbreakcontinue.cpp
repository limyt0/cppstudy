#include <iostream>

using namespace std;

int main21(){
    int a;
    cin >> a;
    switch(a){
        case 1: 
            cout << "1입력함\n";
            break;
        case 2:
            cout << "2입력함\n";
            break;
        case 3:
            cout << "3입력함\n";
            break;
        default:
            cout << "1,2,3말고 다른거 입력함\n";
            break;
    }

    cout << "switch 구문 끝\n";

    return 0;
}