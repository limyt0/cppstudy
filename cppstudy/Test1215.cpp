#include <iostream>
using namespace std;

void print(double a) {
	cout << "double: " << a << endl;
}

void print(long a) {
	cout << "long: " << a << endl;
}

int main1215() {
	//print(10); // 컴파일 에러
	return 0;
}