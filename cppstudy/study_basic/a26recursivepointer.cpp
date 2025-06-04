#include <iostream>

using namespace std;

void countDown(int);

int main26_01(){
   
    countDown(5);

    return 0;
}

void countDown(int n){
    cout << "counting: " << n << endl;

    if(n > 0)
        countDown(n - 1);
    cout << n << "번째 재귀함수" << endl;
}

int func(int);

int main26(){
    int (*pf)(int);
    pf = func;

    cout << (*pf)(3) << endl;
    
    return 0;
}

int func(int n){

    return n+1;

}