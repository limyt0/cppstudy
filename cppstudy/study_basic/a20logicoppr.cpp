#include <iostream>

using namespace std;

int main20(){
    //논리 연산자
    int age;
    cout << "나이 입력.";
    cin >> age;
    if(age <0 || age >100){
        cout << "나이 구라치지마라!\n";
    }else if(20 <= age && 29 >= age){
        cout << "20대\n";
    }else{
        cout << "20대 아님\n";
    }

    return 0;
}
