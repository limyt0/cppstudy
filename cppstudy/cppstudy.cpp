#include <iostream>
void memcpy(void* src, void* dst, int length);

int main()
{
    int number;
    std::cin >> number;
    char *src = new char[number];
    for (int i = 0; i < number; i++) {
        std::cin >> src[i];
    }
    char *dst = new char[number];
    char t1[8] = { 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b' };

    memcpy(src, dst, number);
    //std::cout << "Hello World!\n";
    for (int i = 0; i < number;i++) {
        std::cout << src[i] <<", "<<dst[i]<<'\n';
    }
    return 0;

}

void memcpy(void* src, void* dst, int length) {
    //int size = sizeof(src);
    char* k = (char * )src;

    char t[8] = { 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a' };

    char* k2 = (char*)dst;

    char test[2] = {};
    for (int i = 0; i < length; i++) {
        k2[i] = k[i];
    }
    for (int i = 0; i < 1024; i++) {
        std::cout << "test["<< i <<"]:" << test[0 - i] << "\n";
    }
}