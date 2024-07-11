#include "block.h"
#include <ctime>

Block::Block(int idx, const std::string &d, Block* previous)
    : index(idx), data(d), prev(previous), next(nullptr) {
    timestamp = getCurrentTime(); // Now it knows about getCurrentTime()
}

std::string getCurrentTime() {
    time_t now = time(0);
    return ctime(&now);
}
