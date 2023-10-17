#include "LongitudinalRedundancyCheck.h"

#include <iostream>
#include <vector>

int calculateLRC(const std::vector<int>& data) {
    //std::vector<int> data = {1, 2, 3, 4, 5}; // Datos de ejemplo
    int lrc = 0;

    for (int bit : data) {
        lrc ^= bit; // XOR para calcular LRC
    }

    std::cout << "Datos originales: ";
    for (int bit : data) {
        std::cout << bit << " ";
    }
    std::cout << std::endl;

    std::cout << "LRC: " << lrc << std::endl;

    return 0;
}
