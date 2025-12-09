#include <iostream>
using namespace std;

int main1208() {

    int arr[3] = { 100,200,300 };

    int* p = arr;

    int(&arr2)[3] = arr;



    cout << "p = " << p << "(arr[0] 林家)" << endl;
    cout << "p + 1 =" << p + 1 << "(arr[1] 林家)" << endl;
    cout << "p + 2 =" << p + 2 << "(arr[2] 林家)" << endl;

    cout << "arr2 = " << arr2[0] << endl;
    cout << "arr2 + 1 =" << *(arr2 + 1) << endl;
    cout << "arr2 + 2 =" << arr2[2] << endl;

    cout << "*(p) = " << p[0] << endl;
    cout << "*(p+1) = " << *(p + 1) << endl;
    cout << "*(p+21) = " << p[2] << endl;
    return 0;
}