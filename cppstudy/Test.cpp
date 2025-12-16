#include <iostream>
using namespace std;

template <typename T>

class Array {
	T data[100];
	int size;
public:
	Array() : size(0) {}
	void add(const T& element) {
		if (size < 100)
			data[size++] = element;
	}

	void remove() {
		if (size > 0)
			size--;
	}

	void print() {
		for (int i = 0; i < size; i++)
			cout << data[i] << " ";
		cout << endl;
	}
};

int main() {
	Array<int> arr;
	arr.add(10);
	arr.add(20);
	arr.add(30);
	arr.print();

	arr.remove();
	arr.print();
	return 0;
}