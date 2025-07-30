#include <bits/stdc++.h>
using namespace std;

void arr2Que(vector<int> & arr, queue<int> & q) {
    for (int i = 0; i < arr.size(); i++) {
        q.push(arr[i]);
    }
}

void reverse(queue<int> &q, int k) {
    stack<int> s;
    int n = q.size();

    if (k > n) {
        cout << "k is greater than the size of the queue." << endl;
        return;
    }

    // Step 1: Push first k elements into the stack
    for (int i = 0; i < k; i++) {
        s.push(q.front());
        q.pop();
    }

    // Step 2: Enqueue back the stack elements
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    // Step 3: Rotate the remaining elements
    for (int i = 0; i < n - k; i++) {
        q.push(q.front());
        q.pop();
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    queue<int> q;
    arr2Que(arr, q);

    int k = 3; // Change this value as needed
    reverse(q, k);

    // Print the modified queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}