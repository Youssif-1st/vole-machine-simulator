#ifndef CU_H
#define CU_H

#include "Register.h"
#include "Memory.h"

class CU {
public:
    virtual void load(int idxReg, int intMem, Register& reg, Memory& mem) = 0;
    virtual void load(int idxReg, int valInt, Register& reg) = 0;
    virtual void store(int idxReg, int idxMem, Register& reg, Memory& mem) = 0;
    virtual void move(int idxReg1, int idxReg2, Register& reg) = 0;
    virtual void jump(int idxReg, int idxMem, Register& reg, int& PC) = 0;
    virtual void halt() = 0;
};

#endif // CU_H
