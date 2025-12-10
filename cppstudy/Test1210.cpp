//#include <iostream>
//using namespace std;
//
//void PrintNumber(int* pNumber) {
//    for (int i = 0; i < 10; i++) {
//        cout << "numbers[" << i << "]: " << *(pNumber + i) << endl;
//    }
//}
//
//int main1210() {
//
//    int numbers[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//    PrintNumber(numbers);
//
//    return 0;
//}

#include <iostream>
using namespace std;

void SwapByPointer(int* pA, int* pB) {
    int temp;
    temp = *pA;
    *pA = *pB;
    *pB = temp;
}
void SwapByReference(int& refA, int& refB) {
    int temp;
    temp = refA;
    refA = refB;
    refB = temp;
}

int main1210() {
    int Ap = 1;
    int Bp = 2;
    int Ar = 3;
    int Br = 4;
    SwapByPointer(&Ap, &Bp);
    cout << Ap << ", " << Bp << endl;
    SwapByReference(Ar, Br);
    cout << Ar << ", " << Br << endl;

    return 0;
}