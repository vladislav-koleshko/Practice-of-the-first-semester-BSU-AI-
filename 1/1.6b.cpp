#include <iostream>

int main() {
    unsigned short int n = 12345; 
    unsigned short int mask_0 = 1;  
    unsigned short int mask_7 = 1 << 7;  
    unsigned short int mask_15 = 1 << 15;


    std::cout << "0 bit" << (n & mask_0) << std::endl;
    std::cout << "7 bit" << ((n & mask_7) >> 7) << std::endl;
    std::cout << "15 bit" << ((n & mask_15) >> 15) << std::endl;


    unsigned short int mask_invert = (1 << 7) | (1 << 8); 
    n = n ^ mask_invert; 


    std::cout << n << std::endl;

    return 0;
}