#include <iostream>
using namespace std;

template <typename T>
void swapValues(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

int main1216() {
	int x = 10, y = 20;
	swapValues(x, y);
	cout << "x: " << x << ", y: " << y << endl;

	double p = 3.14, q = 2.71;
	swapValues(p, q);
	cout << "p: " << p << ", q: " << q << endl;

	string a = "apple", b = "banana";
	swapValues(a, b);
	cout << "a: " << a << ", b: " << b << endl;

	return 0;
}