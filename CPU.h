#ifndef CPU_H
#define CPU_H

#include "Register.h"
#include "Memory.h"
#include "ALU.h"
#include "CU.h"
#include <vector>
#include <string>

using namespace std;

class CPU : public CU {
public:
    int programCounter = 0;
    string instructionRegister;
    Register reg;
    ALU alu;
    

    string getir() {};

    // Overriding CU functions, ensuring signatures match those in CU.h
    void load(int idxReg, int intMem, Register& reg, Memory& mem) override;
    void load(int idxReg, int valInt, Register& reg) override;
    void store(int idxReg, int idxMem, Register& reg, Memory& mem) override;
    void move(int idxReg1, int idxReg2, Register& reg) override;
    void jump(int idxReg, int idxMem, Register& reg, int& PC) override;
    void halt() override;

    
    void fetch(const Memory& mem);
    void decode(vector<int>& decodedInstruction);
    void execute(Memory& mem, vector<int>& decodedInstruction);


    string  decimalToHex(int decimal);
};

#endif // CPU_H
