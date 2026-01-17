#include <iostream>
#include <vector>
#include <string>
using namespace std;


string solution(vector<string> seoul) {
    string answer = "";
    int n = -1;
    for (int i = 0; i<seoul.size();i++) 
    {
        if (seoul[i] == "Kim")
        {
            n = i;
            break;
        }
    }
    
    answer = "김서방은 "+ to_string(n)+"에 있다";
    return answer;
}


// Main 함수
int main() {
    vector<string> a = { "Jane", "Kim" };
    cout << solution(a) << endl;
    return 0;
}