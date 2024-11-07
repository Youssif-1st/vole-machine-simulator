#ifndef MEMORY_H
#define MEMORY_H

#include <string>
#include<vector>
using namespace std;

class Memory {
public:
    vector<string>memory;
    Memory() : memory(256, "00") {}
   
   static const int size = 256;
    string getCell(int address) const;
    void setCell(int address, const string& value);
};

#endif // MEMORY_H

