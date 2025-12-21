#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class Queue {
private:
    std::vector<int> queue;

public:
    Queue() = default;

    int front() const {
        if (queue.empty()) {
            throw std::out_of_range("큐가 비어있음!");
        }
        return queue.front();
    }

    int back() const {
        if (queue.empty()) {
            throw std::out_of_range("큐가 비어있음!");
        }
        return queue.back();
    }

    void push(int value) {
        queue.push_back(value);
    }

    void pop() {
        if (queue.empty()) {
            throw std::underflow_error("큐가 비어서 꺼낼 게 없음!");
        }
        queue.erase(queue.begin());
    }
};

int main1219_Queue()
{
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    std::cout << "현재 front 원소: " << q.front() << std::endl;
    std::cout << "현재 back 원소: " << q.back() << std::endl;

    q.pop();
    std::cout << "현재 front 원소: " << q.front() << std::endl;

    q.pop();
    q.pop();

    return 0;
}