#ifndef MACHINE_H
#define MACHINE_H

#include "CPU.h"
#include "Memory.h"
#include <string>
#include <iomanip> 
#include<sstream>
#include"Register.h"
class Machine {
private:
    CPU processor;
    Memory memory;
    Register reg;

public:

    

    void loadInstructions();   // Allows user to input instructions manually
    void clearMemory();        // Clears memory
    void outputState() const;  // Displays current state of the machine
    void run();                // Runs the program based on loaded instructions
};

#endif // MACHINE_H
