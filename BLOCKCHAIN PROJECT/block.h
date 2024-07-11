#include <iostream>
#ifndef BLOCK_H
#define BLOCK_H

#include <string>

class Block {
public:
    int index;
    std::string data;
    std::string timestamp;
    Block* prev;
    Block* next;

    Block(int idx, const std::string &d, Block* previous);
};

std::string getCurrentTime(); // Declaration of getCurrentTime() function

#endif // BLOCK_H
