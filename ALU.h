#ifndef ALU_H
#define ALU_H

#include <string>
#include <vector>
#include"Register.h"
using namespace std;

class ALU {
public:
    string hexToDec(const string& hex);
    string decToHex(int decimal);
    bool isValid(const string& hex);
    void add(int idx1, int idx2, int idx3, Register &reg);
    void addFloating(int idx1, int idx2, int idx3, Register reg); // New function for floating-point addition
};

#endif // ALU_H
