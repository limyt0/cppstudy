#include <iostream>
#include <vector>
using namespace std;

int main1217() {
	vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);

	for (int num : vec) {
		cout << num << " ";
	}
	return 0;
}