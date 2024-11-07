#ifndef REGISTER_H
#define REGISTER_H
#include <vector>
#include<string>
using namespace std;

class Register {
public:
    vector<string> memory;
    Register() : memory(16, "00") {}
    string getCell(int index) const;
    void setCell(int index, const string &value);
};

#endif // REGISTER_H

