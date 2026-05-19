#include <iostream>
#include "libnostd/libnostd.hpp"
#include "libnostd/cs/core.hpp"
#include <string>
int main() {
	using cs::dec2hex;
        using cs::hex2dec;
        using cs::dec2bin;
	println("LIBNOSTD");

	unsigned int x = 123456789;
	std::cout << "hex(" << x << ") = " << dec2hex(x) << std::endl;

	std::string y = "ABCDEF";
        std::cout << "dec(" << y << ") = " << hex2dec(y) << std::endl;

        std::cout << "bin(" << x << ") = " << dec2bin(x) << std::endl;
	return 0;
}
