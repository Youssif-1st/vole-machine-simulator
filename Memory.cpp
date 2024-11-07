#include "Memory.h"

string Memory::getCell(int address) const {
    return memory[address];
}

void Memory::setCell(int address, const string& value) {
    memory[address] = value;
}
