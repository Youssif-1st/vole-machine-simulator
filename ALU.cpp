#include "ALU.h"
#include <sstream>
#include <iomanip>
#include <cmath>

string ALU::hexToDec(const string& hex) {
    return to_string(stoi(hex, nullptr, 16));
}

string ALU::decToHex(int decimal) {
    stringstream ss;
    ss << hex << decimal;
    return ss.str();
}

bool ALU::isValid(const string& hex) {
    for (char c : hex) {
        if (!isxdigit(c)) return false;
    }
    return true;
}

void ALU::add(int idx1, int idx2, int idx3,Register& reg ) {
    int ad = stoi(reg.getCell(idx2)) + stoi(reg.getCell(idx3));
    reg.setCell(idx1, to_string(ad));
}

// New function for floating-point addition
void ALU::addFloating(int idx1, int idx2, int idx3, Register reg) {
    float value1 = stof(hexToDec(reg.getCell(idx2)));
    float value2 = stof(hexToDec(reg.getCell(idx3)));
    int result = stoi(decToHex(static_cast<int>(value1 + value2)));
    reg.getCell(idx1) = to_string(result);
}
