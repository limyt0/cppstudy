#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string str = "hello world";

	auto it = find(str.begin(), str.end(), 'o');

	if (it != str.end()) {
		cout << (it - str.begin()) << endl;
	}
	else {
		cout << "not found" << endl;
	}

	return 0;
}