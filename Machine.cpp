#include "Machine.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include<sstream>
#include<cstring>

int AE = 0;
string  decimalToHex(int decimal) {
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


void Machine::loadInstructions() {
    std::string input;
    std::cout << "Enter instructions:\n";
    int address = 0;
    
    while (true) {
        std::cout << "> ";
        std::cin >> input;
        AE++;
        if (input == "C000") break; // Start execution when "run" is entered

        // Split input into two-byte chunks and store each chunk in memory
        for (size_t i = 0; i < input.length(); i += 2) {
            if (address >= memory.size) {
                std::cerr << "Memory overflow. Cannot store more instructions.\n";
                return;
            }
            memory.setCell(address++, input.substr(i, 2));
        }
    }
}
void Machine::clearMemory() {
    for (int i = 0; i < memory.size; ++i) {
        memory.setCell(i, ""); // Clear each cell by setting it to an empty string
    }
}

void Machine::outputState() const {
    //std::cout << "Final Program Counter: " << processor.programCounter << "\n";

    // Output registers
    std::cout << "Registers:\n";
    for (int i = 0; i < 16; ++i) {
        // decimalToHex(stoi(processor.reg.getCell(i)))
        
        std::cout << "Register " << hex << i << ": " << decimalToHex(stoi(processor.reg.getCell(i))) << "\n";
       
    }

    // Output memory cells
    std::cout << "Memory Contents:\n";
    for (int i = 0; i < memory.size; ++i) {
        std::cout << "Memory Cell " << hex << i << ": " << memory.getCell(i) << "\n";
    }
}


void Machine::run() {
   
    for (size_t i = 0; i < AE-1; i++)
    {
        processor.fetch(memory);

        // Check if we reached the end of the program
        if (processor.instructionRegister.empty()) {
            std::cout << "End of program reached.\n";
            break;
        }

        std::vector<int> decodedInstruction;
        processor.decode(decodedInstruction);

        if (!decodedInstruction.empty() && decodedInstruction[0] == 12) { // Assuming 'C' -> 12 for halt
            processor.halt();
            break;
        }

        processor.execute(memory, decodedInstruction);
        
    }
    outputState();
    

}
