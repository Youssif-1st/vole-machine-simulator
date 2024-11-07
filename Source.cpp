#include"Header.h"
#include <msclr\marshal_cppstd.h>
Memory m1;
CPU cp;
ALU al;

System::String^ system_Converter(const std::string& stdString) {
    return msclr::interop::marshal_as<System::String^>(stdString);
}
std::string convert(std::stringstream& ss) {
    return ss.str();
}
std::string someFunction(System::String^ managedString) {
    // Convert System::String^ to std::string
    std::string stdString = msclr::interop::marshal_as<std::string>(managedString);

    // Now use stdString with std::stringstream
    std::stringstream ss;
    ss << stdString;

    // Call the convert function
    std::string result = convert(ss);
    return result;
}



void add(int x, std::string code, Memory& m1) {
    for (char& c : code) {
        c = std::toupper(c);
    }

    m1.setCell(x++, code.substr(0, 2));
    m1.setCell(x++, code.substr(2, 2));
}

