#include <iostream>

using namespace std;

int main10_1(){
    //구조체 : 
        
    struct Mystruct{
        string name;
        string position;
        int height;
        int weight;
    } B;

    Mystruct A1;
    A1.name = "ranranru";
    A1.position = "Striker";
    A1.height = 180;
    A1.weight = 77;

    Mystruct A2 = {
        "Son",
        "Striker",
        170,
        78
    };

    cout << A2.name << endl;
    cout << A2.position << endl;
    cout << A2.height << endl;
    cout << A2.weight << endl;
    B = {  };
    cout << B.height << endl;

    return 0;
}


int main10_2(){
    struct Mystruct{
        string name;
        string position;
        int height;
        int weight;
    };

    Mystruct A[2] = {
        {"A","A",1,1} ,
        {"B","B",2,2}
    };
    cout << A[0].height << endl;
    return 0;
}