#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void reverseQueue(queue<int>& q) {
    stack<int> s;
    
    // Step 1: Dequeue all elements from the queue and push them onto the stack
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }
    
    // Step 2: Pop all elements from the stack and enqueue them back into the queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

int main() {
    queue<int> q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    
    cout << "Original queue: ";
    queue<int> temp = q; // Make a copy of the queue for display purposes
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
    
    reverseQueue(q);
    
    cout << "Reversed queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    
    return 0;
}
