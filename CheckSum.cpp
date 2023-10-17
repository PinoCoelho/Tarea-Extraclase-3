#include "CheckSum.h"

#include <iostream>
#include <vector>

int calculateCheckSum(const std::vector<int>& data) {
    //std::vector<int> data = {1, 2, 3, 4, 5}; // Datos de ejemplo
    int sum = 0;

    for (int bit : data) {
        sum += bit; // Suma de verificación
    }

    std::cout << "Datos originales: ";
    for (int bit : data) {
        std::cout << bit << " ";
    }
    std::cout << std::endl;

    std::cout << "Suma de verificacion: " << sum << std::endl;

    return 0;
}
