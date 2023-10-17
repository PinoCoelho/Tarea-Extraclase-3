#include "ParityChecking.h"

#include <iostream>
#include <bitset>

bool checkParity(const std::string& data) {
    //std::string data = "1101010"; // Datos de ejemplo
    int parity = 0;

    for (char bit : data) {
        if (bit == '1') {
            parity ^= 1; // XOR para calcular la paridad
        }
    }

    std::cout << "Datos originales: " << data << std::endl;
    std::cout << "Bit de paridad: " << parity << std::endl;

    return true;
}
