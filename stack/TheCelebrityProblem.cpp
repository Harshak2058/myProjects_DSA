#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int celebrity(vector<vector<int>>& M, int N) {
    stack<int> s;
        for (int i = 0; i < N; ++i) {
        s.push(i);
    }
    
    while (s.size() > 1) {
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();
        
        if (M[a][b] == 1) {
            s.push(b);
        } else {
            s.push(a);
        }
    }
    int potential_celebrity = s.top();
    
    for (int i = 0; i < N; ++i) {
        if (i != potential_celebrity) {
            if (M[potential_celebrity][i] == 1 || M[i][potential_celebrity] == 0) {
                return -1;
            }
        }
    }
    
    return potential_celebrity;
}

int main() {
    int N = 3;
    vector<vector<int>> M = {{0, 1, 0},
                             {0, 0, 0},
                             {0, 1, 0}};
    int result = celebrity(M, N);
    if (result == -1) {
        cout << "There is no celebrity." << endl;
    } else {
        cout << "The celebrity is person " << result << "." << endl;
    }
    
    return 0;
}
