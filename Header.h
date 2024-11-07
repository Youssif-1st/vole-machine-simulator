#pragma once
#include <vector>
#include <string>
#include <iomanip> 
#include<sstream>
#include <unordered_map>
#include<cmath>

class Memory {
public:
    std::vector<std::string>memory;
    Memory() : memory(256, "00") {}

    static const int size = 256;
    std::string Memory::getCell(int address) const {
        return memory[address];
    }

    void Memory::setCell(int address, const std::string& value) {
        memory[address] = value;
    }
    void clearMemory() {
        for (auto& cell : memory) {    //new add!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
            cell = "00"; // Reset each memory cell to "00"
        }
    }
};
    class Register {
    public:
        std::vector<std::string> memory;
        Register() : memory(16, "00") {}
        std:: string Register::getCell(int index) const {
            return memory[index];
        }

        void Register::setCell(int index, const std::string& value) {
            memory[index] = value;
        }
        void clearRegisters() {
            for (auto& cell : memory) {     //new add!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
                cell = "00"; // Reset each register cell to "00"
            }
        }

    };
   
    Register rr;
    class CU {
    public:
        virtual void load1(int idxReg, std::string intMem, Register& reg, Memory& mem) = 0;
        virtual void load2(int idxReg, std::string valInt, Register& reg) = 0;
        virtual void store(int idxReg, std::string idxMem, Register& reg, Memory& mem) = 0;
        virtual void move(int idxReg1, int idxReg2, Register& reg) = 0;
        virtual void jump(int idxReg, int idxMem, Register& reg, int& PC) = 0;
        virtual void OR(int idx1, int idx2, int idx3, Register& reg) = 0;
        virtual void AND(int idx1, int idx2, int idx3, Register& reg) = 0;
        virtual void XOR(int idx1, int idx2, int idx3, Register& reg) = 0;
        virtual void Rotate(int idxReg, int bitCount,  Register& reg) = 0;
		//virtual void Djumb(int idxReg, int idxMem, Register& reg, int& PC) = 0; 
        


        
    };


    class ALU {
    public:
        static int hextodec(const std::string& hex) {
            int decimalValue = 0;
            decimalValue = std::stoi(hex, nullptr, 16);  
            return decimalValue;
        }

        std::string decToHex(int decimal) {
            std::stringstream ss;
            ss << std::hex << decimal;
            return ss.str();
        }

        bool isValid(const std::string& hex) {
            for (char c : hex) {
                if (!isxdigit(c)) return false;
            }
            return true;
        }

        void add(int idx1, int idx2, int idx3, Register& reg) {
            int ad = ALU::hextodec(reg.getCell(idx2)) + ALU::hextodec(reg.getCell(idx3));
            reg.setCell(idx1, decToHex(ad));
        }




        float hexToFloat(const std::string& hexValue) {
            int intValue = std::stoi(hexValue, nullptr, 16);
            bool isNegative = (intValue & 0x8000) != 0; 
            int exponent = ((intValue >> 8) & 0x0F) - 4; 
            int mantissa = intValue & 0xFF;

            float value = mantissa * std::pow(2, exponent);
            return isNegative ? -value : value;
        }





        std::string floatToHex(float value) {
            bool isNegative = value < 0;
            if (isNegative) value = -value;

            int exponent = static_cast<int>(std::floor(std::log2(value))) + 4;
            int mantissa = static_cast<int>(value / std::pow(2, exponent - 4));

            int hexValue = (isNegative ? 0x8000 : 0) | ((exponent & 0x0F) << 8) | (mantissa & 0xFF);
            std::stringstream ss;
            ss << std::hex << hexValue;
            return ss.str();
        }

        
       
        
        void addFloating(int idx1, int idx2, int idx3, Register& reg) {
       
            float value1 = hexToFloat(reg.getCell(idx2));  
            float value2 = hexToFloat(reg.getCell(idx3));  


            float result = value1 + value2;

            
            std::string hexResult = floatToHex(result);

            
            reg.setCell(idx1, hexResult);
        }


       

    };



    class CPU : public CU {
    public:
        int programCounter = 0;
        std::string instructionRegister;
        Register reg;
        ALU alu;
        


        std::string getir() {};

        // Overriding CU functions, ensuring signatures match those in CU.h
        static std::string dectohex(int decimal) {
            std::stringstream ss, cc;
            ss << std::hex << decimal;
            if (ss.str() == "0"  || ss.str() == "1" || ss.str() == "2" || ss.str() == "3" || ss.str() == "4" || ss.str() == "5" || ss.str() == "6" || ss.str() == "7"
              ||  ss.str() == "8" || ss.str() == "9" || ss.str() == "a" || ss.str() == "b" || ss.str() == "c" || ss.str() == "d" || ss.str() == "e" || ss.str() == "f") {
                return "0" + ss.str();
            }
            return  ss.str();
        }
        static std::string hexToBinary(const std::string& hex) {
            // Mapping of hexadecimal digits to their binary equivalents
            std::unordered_map<char, std::string> hexToBinMap = {
                {'0', "0000"}, {'1', "0001"}, {'2', "0010"}, {'3', "0011"},
                {'4', "0100"}, {'5', "0101"}, {'6', "0110"}, {'7', "0111"},
                {'8', "1000"}, {'9', "1001"}, {'A', "1010"}, {'B', "1011"},
                {'C', "1100"}, {'D', "1101"}, {'E', "1110"}, {'F', "1111"},
                {'a', "1010"}, {'b', "1011"}, {'c', "1100"}, {'d', "1101"},
                {'e', "1110"}, {'f', "1111"}
            };

            std::string binary = "";
            for (char ch : hex) {
                // Append the binary equivalent of each hexadecimal digit
                binary += hexToBinMap[ch];
            }

            return binary;
        }

        std::string binaryToHex(const std::string& binary) {
            // Mapping of binary 4-bit groups to their hexadecimal equivalents
            std::unordered_map<std::string, char> binToHexMap = {
                {"0000", '0'}, {"0001", '1'}, {"0010", '2'}, {"0011", '3'},
                {"0100", '4'}, {"0101", '5'}, {"0110", '6'}, {"0111", '7'},
                {"1000", '8'}, {"1001", '9'}, {"1010", 'A'}, {"1011", 'B'},
                {"1100", 'C'}, {"1101", 'D'}, {"1110", 'E'}, {"1111", 'F'}
            };

            std::string paddedBinary = binary;
            std::string hex = "";

            // Pad binary string with leading zeros to make its length a multiple of 4
            int padding = 4 - (binary.length() % 4);
            if (padding != 4) {
                paddedBinary = std::string(padding, '0') + binary;
            }

            // Convert each 4-bit group to its hexadecimal equivalent
            for (size_t i = 0; i < paddedBinary.length(); i += 4) {
                std::string fourBits = paddedBinary.substr(i, 4);
                hex += binToHexMap[fourBits];
            }

            return hex;
        }
        std::string padToMatchLength(const std::string& shorter, size_t targetLength) {
            std::string padded = shorter;
            while (padded.length() < targetLength) {
                padded = "0" + padded; // Add leading zeros
            }
            return padded;
        }







        std::string floatToHex(float value) {
            int sign = (value < 0) ? 1 : 0;
            value = std::fabs(value);

            int exponent = 0;
            float mantissa = value;

            // Determine exponent based on the value range and format details
            if (value >= 0.5) {
                exponent = 4;  // Example exponent if value is in the range for 0.5
            }
            else if (value >= 0.25) {
                exponent = 3;  // Example for values in the 0.25 range
            }
            else {
                exponent = 2;  // For smaller values, adjust as needed
            }

            // Adjust mantissa for fixed-point conversion
            int mantissaBits = static_cast<int>(mantissa * (1 << 4)); // Multiply to fit the format

            // Build the binary representation
            int result = (sign << 7) | (exponent << 4) | mantissaBits;

            // Convert to hexadecimal
            std::stringstream ss;
            ss << std::hex << std::uppercase << result;
            return ss.str();
        }













        void OR(int idx1, int idx2, int idx3, Register& reg) {
           
            std::string bin2 = hexToBinary(reg.getCell(idx2));
            std::string bin3 = hexToBinary(reg.getCell(idx3));

            size_t maxLength = std::max(bin2.length(), bin3.length());


            std::string paddedNum2 = bin2.length() < maxLength ? padToMatchLength(bin2, maxLength) : bin2;
            std::string paddedNum3 = bin3.length() < maxLength ? padToMatchLength(bin3, maxLength) : bin3;


           
            std::string result = "";
            for (size_t i = 0; i < maxLength; ++i) {
                if (paddedNum2[i] == '1' || paddedNum3[i] == '1') {
                    result += '1';
                }
                else {
                    result += '0';
                }
            }

            reg.setCell(idx1, binaryToHex(result));

        }
        void AND(int idx1, int idx2, int idx3, Register& reg) {

            std::string bin2 = hexToBinary(reg.getCell(idx2));
            std::string bin3 = hexToBinary(reg.getCell(idx3));

            size_t maxLength = std::max(bin2.length(), bin3.length());


            std::string paddedNum2 = bin2.length() < maxLength ? padToMatchLength(bin2, maxLength) : bin2;
            std::string paddedNum3 = bin3.length() < maxLength ? padToMatchLength(bin3, maxLength) : bin3;



            std::string result = "";
            for (size_t i = 0; i < maxLength; ++i) {
                if (paddedNum2[i] == '1' && paddedNum3[i] == '1') {
                    result += '1';
                }
                else {
                    result += '0';
                }
            }

            reg.setCell(idx1, binaryToHex(result));

        }
        void XOR(int idx1, int idx2, int idx3, Register& reg) {

            std::string bin2 = hexToBinary(reg.getCell(idx2));
            std::string bin3 = hexToBinary(reg.getCell(idx3));

            size_t maxLength = std::max(bin2.length(), bin3.length());


            std::string paddedNum2 = bin2.length() < maxLength ? padToMatchLength(bin2, maxLength) : bin2;
            std::string paddedNum3 = bin3.length() < maxLength ? padToMatchLength(bin3, maxLength) : bin3;



            std::string result = "";
            for (size_t i = 0; i < maxLength; ++i) {
                if (paddedNum2[i] == '1' && paddedNum3[i] == '1') {
                    result += '0';
                }
                else if(paddedNum2[i] == '0' && paddedNum3[i] == '0'){
                    result += '0';

                }
                else {
                    result += '1';
                }
            }

            reg.setCell(idx1, binaryToHex(result));

        }

        void Rotate(int idxReg, int bitCount, Register& reg) {
            
            std::string binaryValue = hexToBinary(reg.getCell(idxReg));
            if (binaryValue.size() < 8) {
                binaryValue = std::string(8 - binaryValue.size(), '0') + binaryValue;
            }


         
            int effectiveBitCount = bitCount % binaryValue.size();

       
            binaryValue = binaryValue.substr(binaryValue.size() - effectiveBitCount) +
                binaryValue.substr(0, binaryValue.size() - effectiveBitCount);

      
            reg.setCell(idxReg, binaryToHex(binaryValue));
        }

        void load1(int idxReg, std::string intMem, Register& reg, Memory& mem) {
            reg.setCell(idxReg, mem.getCell(ALU::hextodec(intMem)));
        }

        void load2(int idxReg, std::string valInt, Register& reg) {
            reg.setCell(idxReg, (valInt));
        }

        void store(int idxReg, std::string idxMem, Register& reg, Memory& mem) {
            mem.setCell(ALU::hextodec( (idxMem)), ((reg.getCell(idxReg))));
        }




       






        void move(int idxReg1, int idxReg2, Register& reg) {
            reg.setCell(idxReg2, reg.getCell(idxReg1));
        }

		void jump(int idxReg, int idxMem, Register& reg, int& PC) { // b10a - jump to memory location 0x0A if register 0 is equal to register 1             
            if (reg.getCell(idxReg) == reg.getCell(0)) {
                PC = idxMem;
            }
        }


        void Djump(int idxReg, int idxMem, Register& reg, int& PC) {
            if (reg.getCell(idxReg) > reg.getCell(0)) {
                PC = idxMem;
            }
        }
        void halt() {
            exit (0);
        }
        

       



        void fetch(const Memory& mem) {
            // Fetch two memory cells (4 bytes total) for one instruction
            std::string byte1 = mem.getCell(programCounter++);
            
            std::string byte2 = mem.getCell(programCounter++);
            instructionRegister = byte1 + byte2;
           
        }


        
        void decode(std::vector<int>& decodedInstruction) {
            char opCode = instructionRegister[0];
            decodedInstruction.push_back(opCode - '0');
            decodedInstruction.push_back(std::stoi(instructionRegister.substr(1, 1), nullptr, 16));
            decodedInstruction.push_back(std::stoi(instructionRegister.substr(2), nullptr, 16));
        }


        


        
          

        void execute(Memory& mem, std::vector<int>& decodedInstruction) {
            char opCode = instructionRegister[0];
            
            int arg1 = decodedInstruction[1];
            std::string arg2 = instructionRegister.substr(2);
            int x = ALU::hextodec(instructionRegister.substr(2, 2));


            switch (opCode) {
            case '1': // OpCode 1 - Load Register with Memory Value
                load1(arg1, arg2, rr, mem);  
                break;

            case '2': // OpCode 2 - Load Register with Immediate Value
                load2(arg1, arg2, rr);       // Executes `load(int idxReg, int valInt, Register& reg)`
                break;

            case '3': // OpCode 3 - Store Register Value to Memory
                store(arg1, arg2, rr, mem); // Executes `store(int idxReg, int idxMem, Register& reg, Memory& mem)`
                break;

            case '4': // OpCode 4 - Move Register Value

                move(stoi(instructionRegister.substr(2, 1)), stoi(instructionRegister.substr(3)), rr);       // Executes `move(int idxReg1, int idxReg2, Register& reg)`
                break;

            case '5': // OpCode 5 - Add Values in Registers (Using ALU add method)
                alu.add(stoi(instructionRegister.substr(1, 1)), stoi(instructionRegister.substr(2, 1)), stoi(instructionRegister.substr(3)), rr);
                break;




            case '6': // OpCode 5 - Add Values in Registers (Using ALU add method)
                alu.addFloating(stoi(instructionRegister.substr(1, 1)), stoi(instructionRegister.substr(2, 1)), stoi(instructionRegister.substr(3)), rr);
                break;


            

            case '7': // OpCode B - Conditional Jump
                OR(stoi(instructionRegister.substr(1, 1)), stoi(instructionRegister.substr(2, 1)), stoi(instructionRegister.substr(3)), rr); // Executes `jump(int idxReg, int idxMem, Register& reg, int& PC)`
                break;

            case '8'://OpCode B - Conditional Jump
                AND(stoi(instructionRegister.substr(1, 1)), stoi(instructionRegister.substr(2, 1)), stoi(instructionRegister.substr(3)), rr); // Executes `jump(int idxReg, int idxMem, Register& reg, int& PC)`
                break;



            case '9': // OpCode B - Conditional Jump
                XOR(stoi(instructionRegister.substr(1, 1)), stoi(instructionRegister.substr(2, 1)), stoi(instructionRegister.substr(3)), rr); // Executes `jump(int idxReg, int idxMem, Register& reg, int& PC)`
                break;

            case 'A': //A
                Rotate(stoi(instructionRegister.substr(1, 1)), stoi(instructionRegister.substr(3)),  rr); // Executes `jump(int idxReg, int idxMem, Register& reg, int& PC)`
                break;


            case 'B': // OpCode B - Conditional Jump

                jump(arg1, x, rr, programCounter); // Executes `jump(int idxReg, int idxMem, Register& reg, int& PC)`
                break;
                

            case 'C': //A
                halt(); // Executes `jump(int idxReg, int idxMem, Register& reg, int& PC)`
                break;


            case 'D': // OpCode B - Conditional Jump

                Djump(arg1, x, rr, programCounter); // Executes `jump(int idxReg, int idxMem, Register& reg, int& PC)`
                break;

           






           
       

            }
        }

    };
  

    



