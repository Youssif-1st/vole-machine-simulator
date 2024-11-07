#include "Register.h"

string Register::getCell(int index) const {
    return memory[index];
}

void Register::setCell(int index, const string& value) {
    memory[index] = value;
}
