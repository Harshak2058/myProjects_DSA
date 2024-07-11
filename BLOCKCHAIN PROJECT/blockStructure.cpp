#include <iostream>
#include <string>
#include <ctime>

using namespace std;

string getCurrentTime() {
    time_t now = time(0);
    return ctime(&now);
}

class Block {
public:
    int index;
    string data;
    string timestamp;
    Block* prev;
    Block* next;

    Block(int idx, const string &d, Block* previous)
        : index(idx), data(d), prev(previous), next(nullptr) {
            timestamp = getCurrentTime();
    }
};

int main() {
    // Your main function implementation
    return 0;
}
