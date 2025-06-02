#include <iostream>
#include <cstring>

using namespace std;

int main09_1(){
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++programming";

    cout << "안녕 저는 " << name2;
    cout << "입니다. 성함 무엇?\n";
    //cin >> name1;
    //cin.getline(name1, Size);
    cin.get(name1, Size); //공백 포함하여 문자열 받기
    cout << "음, " << name1 << "씨, 당신이름은 ";
    cout << strlen(name1) << "자 입니다만 \n";
    cout << sizeof(name1) << "byte 크기 배열 저장되었다.\n";
    cout << "이름이" << name1[0] << "자로 시작하는 군요.\n";
    name2[3] = '\0';
    cout << "제이름 첫 3글자는 :";
    cout << name2 << endl;
    return 0;
}

int main09_2(){
    //배열은 다른 배열에 통째 대입 못 하지만 string은 가능함!
    char char1[20];
    char char2[20] = "jauar";
    string str1;
    string str2 = "panda";
    //char1 = char2; // 이렇게 불가능
    str1 = str2;

    cout << str1 << endl;
    return 0;
}