#include <iostream>
#include <climits>

using namespace std;

int main05(){
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    float a = 3.14;

    cout << "intsize: " << sizeof n_int << "byte. " << endl;
    cout << "int max: " << n_int << endl;
    cout << "shortsize: " << sizeof n_short << "byte." << endl;
    cout << "short max: " << n_short << endl;
    cout << "longsize: " << sizeof n_long << "byte." << endl;
    cout << "long max: " << n_long << endl;
    cout << "llongsize: " << sizeof n_llong << "byte." << endl;
    cout << "llong max: " << n_llong << endl;
    return 0;
}