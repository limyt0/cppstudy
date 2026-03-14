#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
//#include <unordered_map>
#include <set>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    string str;
    stringstream ss(s);
    int max = 0;
    int min = 0;
    bool isfirst = true;
    while (ss >> str)
    {
        int a = stoi(str);
        if (isfirst)
        {
            min = a;
            max = a;
            isfirst = false;
        }
        if (a > max) max = a;
        if (a < min) min = a;
    }
    answer = to_string(min) + " " + to_string(max);
    return answer;
}

int main() {
    string s = "1 2 3 4";
    


    cout << solution(s) << endl;
    
    return 0;
}