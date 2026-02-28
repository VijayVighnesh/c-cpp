#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
using namespace std;

// ============ ARRAY ============
void arrayExample() {
    cout << "\n=== ARRAY ===" << endl;
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Access: O(1)
    cout << "Element at index 2: " << arr[2] << endl;
    
    // Traverse: O(n)
    cout << "All elements: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// ============ LINKED LIST ============
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void linkedListExample() {
    cout << "\n=== LINKED LIST ===" << endl;
    
    // Create nodes
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    
    // Traverse
    cout << "List: ";
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// ============ STACK ============
void stackExample() {
    cout << "\n=== STACK (LIFO) ===" << endl;
    stack<int> s;
    
    // Push: O(1)
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout << "Top element: " << s.top() << endl;
    
    // Pop: O(1)
    s.pop();
    cout << "After pop, top: " << s.top() << endl;
}

// ============ QUEUE ============
void queueExample() {
    cout << "\n=== QUEUE (FIFO) ===" << endl;
    queue<int> q;
    
    // Enqueue: O(1)
    q.push(10);
    q.push(20);
    q.push(30);
    
    cout << "Front element: " << q.front() << endl;
    
    // Dequeue: O(1)
    q.pop();
    cout << "After dequeue, front: " << q.front() << endl;
}

// ============ BINARY TREE ============
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

void inorderTraversal(TreeNode* root) {
    if(root == nullptr) return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void binaryTreeExample() {
    cout << "\n=== BINARY TREE ===" << endl;
    
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    
    cout << "Inorder traversal: ";
    inorderTraversal(root);
    cout << endl;
}

// ============ HASH MAP ============
void hashMapExample() {
    cout << "\n=== HASH MAP ===" << endl;
    map<string, int> ages;
    
    // Insert: O(log n) for map, O(1) for unordered_map
    ages["Alice"] = 25;
    ages["Bob"] = 30;
    ages["Charlie"] = 35;
    
    // Access: O(log n)
    cout << "Bob's age: " << ages["Bob"] << endl;
    
    // Iterate
    cout << "All entries: ";
    for(auto& pair : ages) {
        cout << pair.first << ":" << pair.second << " ";
    }
    cout << endl;
}

// ============ SET ============
void setExample() {
    cout << "\n=== SET (Unique elements) ===" << endl;
    set<int> s;
    
    s.insert(10);
    s.insert(20);
    s.insert(10); // Duplicate, won't be added
    s.insert(30);
    
    cout << "Set elements: ";
    for(int val : s) {
        cout << val << " ";
    }
    cout << endl;
}

// ============ VECTOR (Dynamic Array) ============
void vectorExample() {
    cout << "\n=== VECTOR ===" << endl;
    vector<int> v;
    
    // Push back: O(1) amortized
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    cout << "Size: " << v.size() << endl;
    cout << "Elements: ";
    for(int val : v) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    cout << "DATA STRUCTURES IN C++" << endl;
    
    arrayExample();
    linkedListExample();
    stackExample();
    queueExample();
    binaryTreeExample();
    hashMapExample();
    setExample();
    vectorExample();
    
    return 0;
}
