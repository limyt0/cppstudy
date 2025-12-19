#include <iostream>
using namespace std;

class Node {
private:
    string data;
    Node* next;
public:
    Node(string data) {
        this->data = data;
        this->next = nullptr;
    }

    string printNodeData() {
        return this->data;
    }
    friend class LinkedList;
};

class LinkedList {
private:
    Node* head;
    int nodeCount;

public:
    LinkedList(string value) {
        this->head = new Node(value);
        this->nodeCount = 1;
    }
    //~LinkedList();
    void append(string value) {
        Node* curr = this->head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }

        cout << "curr->next: " << curr->next << endl;
        this->nodeCount++;
    }

    Node* getNode(int index) {
        if (index < 0 || index >= nodeCount) {
            throw std::out_of_range("유효하지 않은 인덱스!");
        }

        Node* node = this->head;
        for (int i = 0; i < index; i++) {
            node = node->next;
        }
        return node;
    }

    void addNode(int index, string value) {
        Node* newNode = new Node(value);

        if (index == 0) {
            newNode->next = this->head;
            this->nodeCount++;
            return;
        }

        Node* node = this->getNode(index - 1);
        Node* nextNode = node->next;

        node->next = newNode;

        newNode->next = nextNode;
        this->nodeCount++;
    }

};



int main1219()
{

    LinkedList list("자갈");
    list.addNode(1, "밀가루");
    list.addNode(0, "우편");
    list.addNode(0, "우편1");
    list.addNode(1, "우편2");
    list.append("흑연");

    for (int i = 0; i < 4; i++) {
        cout << i << ": " << list.getNode(i)->printNodeData() << endl;
    }


    return 0;
}