#include <iostream>

using namespace std;

int main17_1(){
    string str = "panda";
    int i = 0;
    
    while(str[i] != '\0'){
        cout << str[i] << endl;
        i++;
    }
    
    return 0;
}

int main17_2(){
    bool j =false;
    do{ 
        cout << "while문.\n";

    } while(j);

    return 0;
}