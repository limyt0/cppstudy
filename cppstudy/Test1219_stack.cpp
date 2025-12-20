#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class Stack {
private:
    std::vector<int> stack;
public:
    Stack() = default;

    int top() {
        if (stack.empty()) {
            throw std::out_of_range("스택 비어있음!");
        }
        return stack.back();
    }
    void push(int value) {
        stack.push_back(value);
    }

    void pop() {
        if (stack.empty()) {
            throw std::underflow_error("스택이 비어서 꺼낼 게 없음!");
        }
        stack.pop_back();
    }
};



int main1219_stack()
{
    Stack s;

    try {
        s.push(10);
        s.push(20);
        s.push(30);

        std::cout << "현재 top 원소: " << s.top() << std::endl;
        s.pop();
        std::cout << "현재 top 원소: " << s.top() << std::endl;

        s.pop();
        s.pop();
        s.pop();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}