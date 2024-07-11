#include "blockchain.h"
#include "block.h" // Include Block class header

Blockchain::Blockchain() {
    head = createGenesisBlock();
    tail = head;
}

void Blockchain::addBlock(const std::string &data) {
    Block* newBlock = new Block(tail->index + 1, data, tail);
    tail->next = newBlock;
    tail = newBlock;
}

bool Blockchain::verifyChain() {
    Block* current = head;
    while (current->next != nullptr) {
        if (current->next->prev != current) {
            return false;
        }
        current = current->next;
    }
    return true;
}

void Blockchain::printChain() {
    Block* current = head;
    while (current != nullptr) {
        std::cout << "Block " << current->index << ": " << std::endl;
        std::cout << "Data: " << current->data << std::endl;
        std::cout << "Timestamp: " << current->timestamp << std::endl;
        std::cout << "Previous Block Index: " << (current->prev ? std::to_string(current->prev->index) : "None") << std::endl;
        std::cout << "Next Block Index: " << (current->next ? std::to_string(current->next->index) : "None") << std::endl << std::endl;
        current = current->next;
    }
}

Block* Blockchain::createGenesisBlock() {
    return new Block(0, "Genesis Block", nullptr);
}
