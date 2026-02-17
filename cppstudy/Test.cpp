#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    reverse(cards1.begin(), cards1.end());
    reverse(cards2.begin(), cards2.end());
    for (int i = 0; i < goal.size(); i++) {

        if (!cards1.empty() && cards1.back() == goal[i]) {
                cards1.pop_back();
        }
        else if (!cards2.empty() && cards2.back() == goal[i])
        {
            cards2.pop_back();
        }
        else {
            answer = "No";
            break;
        }
    
    }
    return answer;
}

// Main 함수
int main() {


    vector<string> cards1 = { "i", "drink", "water" };
    vector<string> cards2 = { "want", "to" };
    vector<string> goal = { "i", "want", "to", "drink", "water" };
 
        cout << solution(cards1, cards2, goal) << endl;
    

    return 0;
}