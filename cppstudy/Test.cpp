#include <iostream>
using namespace std;

int main() {
    int arr[3] = { 100,200,300 };

    int* arr2 = arr;
    //auto arr2 = arr; //이렇게 auto 사용해도 됨.

    cout << "arr2 = " << arr2[0] << endl;
    cout << "arr2 + 1 =" << *(arr2 + 1) << endl;
    cout << "arr2 + 2 =" << arr2[2] << endl;
    return 0;
}