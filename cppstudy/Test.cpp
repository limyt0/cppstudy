#include <vector>
#include <iostream>
#include <map>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

bool search_bst(Node* cur, int target)
{
    if (cur == nullptr) return false;

    if (cur->data == target) return true;
    else if (target < cur->data) 
    {
        cout << "L " << endl;
        return search_bst(cur->left, target);
    }
    else
    {
        cout << "R " << endl;
        return search_bst(cur->right, target);
    }
}

Node* insert_bst(Node* root, int val)
{
    if (root == nullptr) {
        return new Node(val);
    }

    if (val < root->data) {
        root->left = insert_bst(root->left, val);
    }
    else {
        root->right = insert_bst(root->right, val);
    }
    return root;
}

int main() {
    int N = 7;
    vector<int> nums = { 3, 4, 2, 8, 9, 7, 1 };
    int target = 7;
    Node* root = new Node(3);
    for (int i : nums)
    {
        insert_bst(root, i);
    }

    search_bst(root, target);


    return 0;
}