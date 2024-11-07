#include "CPU.h"
#include <iostream>
#include"Machine.h"



string CPU:: decimalToHex(int decimal) {
    if (decimal == 0) return "0";

    std::string hex = "";
    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hex = char(remainder + '0') + hex; // تحويل إلى حرف
        }
        else {
            hex = char(remainder - 10 + 'A') + hex; // تحويل إلى حرف هيكساديسيمال
        }
        decimal /= 16; // قسمة العدد على 16
    }
    return hex;
}


void CPU::load(int idxReg, int intMem, Register& reg, Memory& mem) {
    reg.setCell(idxReg, mem.getCell(intMem));
}

void CPU::load(int idxReg, int valInt, Register& reg) {
    reg.setCell(idxReg, to_string(valInt));
}

void CPU::store(int idxReg, int idxMem, Register& reg, Memory& mem) {
    mem.setCell(idxMem, decimalToHex(stoi((reg.getCell(idxReg)))));
}

void CPU::move(int idxReg1, int idxReg2, Register& reg) {
    reg.setCell(idxReg2, reg.getCell(idxReg1));
}

void CPU::jump(int idxReg, int idxMem, Register& reg, int& PC) {
    if (reg.getCell(idxReg) == reg.getCell(0)) {
        PC = idxMem;
    }
}

void CPU::halt() {
    std::cout << "Program halted." << std::endl;
    exit(0);
}



void CPU::fetch(const Memory& mem) {
    // Fetch two memory cells (4 bytes total) for one instruction
    string byte1 = mem.getCell(programCounter++);
    string byte2 = mem.getCell(programCounter++);
    instructionRegister = byte1 + byte2;
}
  
void CPU::decode(vector<int>& decodedInstruction) {
    char opCode = instructionRegister[0];
    decodedInstruction.push_back(opCode - '0');
    decodedInstruction.push_back(std::stoi(instructionRegister.substr(1, 1), nullptr, 16));
    decodedInstruction.push_back(std::stoi(instructionRegister.substr(2), nullptr, 16));
}

 void CPU::execute(Memory& mem, std::vector<int>& decodedInstruction) {
    int opCode = decodedInstruction[0];
    int arg1 = decodedInstruction[1];
    int arg2 = decodedInstruction[2];
    

    switch (opCode) {
    case 1: // OpCode 1 - Load Register with Memory Value
        load(arg1, arg2, reg, mem);  // Executes `load(int idxReg, int intMem, Register& reg, Memory& mem)`
        break;

    case 2: // OpCode 2 - Load Register with Immediate Value
        load(arg1, arg2, reg);       // Executes `load(int idxReg, int valInt, Register& reg)`
        break;

    case 3: // OpCode 3 - Store Register Value to Memory
        store(arg1, arg2, reg, mem); // Executes `store(int idxReg, int idxMem, Register& reg, Memory& mem)`
        break;

    case 4: // OpCode 4 - Move Register Value
      
        move(stoi(instructionRegister.substr(2,1)), stoi(instructionRegister.substr(3)), reg);       // Executes `move(int idxReg1, int idxReg2, Register& reg)`
        break;

    case 5: // OpCode 5 - Add Values in Registers (Using ALU add method)
        alu.add(stoi(instructionRegister.substr(1, 1)), stoi(instructionRegister.substr(2,1)), stoi(instructionRegister.substr(3)), reg);
        break;

    case 'B': // OpCode B - Conditional Jump
        jump(arg1, arg2, reg, programCounter); // Executes `jump(int idxReg, int idxMem, Register& reg, int& PC)`
        break;

    case 'C': // OpCode C - Halt
        halt(); // Executes `halt()`
        break;
        
    default:
        std::cout << "Unknown OpCode" << std::endl;
    }
}
