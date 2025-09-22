// bindReferenceToTemporary.cpp

#include <iostream>
#include <string>
#include <string_view>

const std::string_view& getString() {
    static std::string s = "Hallo Welt!";
    return s;
}

int main() {
    std::cout << getString() << '\n';
}   