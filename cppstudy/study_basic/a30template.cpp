#include <iostream>

using namespace std;

//clas 혹은 typename
template <class Any>
Any sum(Any, Any);

template <class Any>
Any sum(int, Any);

int main30(){
    int a = 3;
    int b = 4;
    //cout << sum(a,b) << endl;

    float c = 3.14;
    float d = 1.592;
    cout << sum(c,d) << endl;

    //cout << sum(a,c) << endl;

    return 0;
}

template <class Any>
Any sum(Any a, Any b){
    return a+b;
}

template <class Any>
Any sum(int a, Any b){
    return a+b;
}