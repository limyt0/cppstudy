#include <iostream>
//중요
using namespace std;

const int SIZE = 8;

int sumArr1(int[], int);

int sumArr2(int*, int);

int sumArr3(int*, int*);

int main24(){
    //arr == &arr[0]
    int arr[SIZE] = {1,2,4,8,16,32,64,128};
    //cout << "size of arr " << sizeof arr << endl;
    //int sum = sumArr1(arr, SIZE);
    //int sum = sumArr2(arr, SIZE);
    int sum = sumArr3(arr, arr+SIZE);
    cout << SIZE << "까지의 합은" << sum << "입니다.\n";
    sum = sumArr3(arr, arr+3);
    cout << "세번째까지의 합은 " << sum << "입니다.\n";

    return 0;
}

int sumArr1(int arr[], int siz){
    int total = 0;
    for(int i = 0;i<siz;i++){
        total += arr[i];
    }
    return total;
}

int sumArr2(int* arr, int siz){
    cout << "size of arr" << sizeof arr << endl;
    int total = 0;
    for(int i = 0;i<siz;i++){
        total += arr[i];
    }
    return total;

}

int sumArr3(int* begin, int* end){
    int total = 0;
    int* pt;
    for(pt = begin; pt!=end;pt++){
        total += *pt;
    }
    return total;
}