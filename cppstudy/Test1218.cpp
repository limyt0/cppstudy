#include <iostream>
#include <string>
using namespace std;

int main1218() {
	string str = "";

	cin >> str;
	int size = str.size();
	for (int i = 0; i < size; i++) {
		string str2 = str.substr(i, size) + str.substr(0, i);
		cout << str2 << endl;
	}

	return 0;
}