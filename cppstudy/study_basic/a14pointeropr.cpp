#include <iostream>
#include <cstring>

#define SIZE 20
using namespace std;

int main14_01(){
    char animal[SIZE];
    char* ps;
    cout << "동물 이름 입력\n";
    cin >> animal;

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);

    cout << "입력하신 동물 이름 복사 " << endl;
    cout << "입력 동물 이름은 " << animal << "이고, 크기는  "<< sizeof(animal) << ", 그 주소는 " << (int*)animal << "입니다." << endl;
    cout << "복사된 동물 이름은 " << ps << "이고, 크기는 "<<  sizeof(ps) << ", 그 주소는 " << (int*)ps << "입니다." << endl;

    return 0;
}

struct Mystruct
{
    char name[20];
    int age;
};

int main14_02(){

    //동적 구조체 생성
    Mystruct* temp = new Mystruct;
    cout << "이름 입력\n";
    cin >>  temp->name;

    cout << "나이입력\n";
    cin >> (*temp).age;

    cout << "반갑습니다." << temp->name << "님\n";
    cout << "아나따와 " << temp->age << "살 데스네!";

    return 0;
}