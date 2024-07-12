#include "blockchain.h"
#include <iostream>

int main() {
    Blockchain bc;
    bc.addBlock("First Block Data");
    bc.addBlock("Second Block Data");

    bc.printChain();

    if (bc.verifyChain()) {
        std::cout << "Blockchain is valid." << std::endl;
    } else {
        std::cout << "Blockchain is invalid." << std::endl;
    }

    return 0;
}j
